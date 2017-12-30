_BYTE byte_CC078464[154] =
{
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  255,
  0,
  0,
  255,
  40,
  215,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  5,
  250,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  1,
  254,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  1,
  254,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255,
  0,
  255
};


//----- (C80CF9C0) --------------------------------------------------------
char messagePOD_generateBolus_C80CF9C0()
{
  int v0; // ST34_4@1
  int v1; // ST4C_4@1
  int v2; // r0@4
  unsigned int v3; // ST44_4@4
  int v4; // r0@9
  int v5; // r4@13
  int v6; // r0@20
  _BYTE *v7; // r1@20
  char result; // r0@21
  int v9; // off@22
  __int16 len; // [sp+26h] [bp-56h]@20
  unsigned __int16 v11; // [sp+2Ah] [bp-52h]@1
  int v12; // [sp+2Ch] [bp-50h]@0
  int v13; // [sp+30h] [bp-4Ch]@0
  signed int v14; // [sp+38h] [bp-44h]@0
  unsigned int v15; // [sp+3Ch] [bp-40h]@1
  int v16; // [sp+40h] [bp-3Ch]@1
  unsigned int v17; // [sp+44h] [bp-38h]@9
  int v18; // [sp+48h] [bp-34h]@1
  int v19; // [sp+4Ch] [bp-30h]@1
  char v20; // [sp+5Bh] [bp-21h]@1

  sub_C80CB430(0x40u);
  memset_0(messagePOD_CC0826A0, 0, 0x200u);
  v0 = 100 * readWordSafe_CC078380(98);  // stuct_0: *aChangePod //int __fastcall readWordSafe_CC078380(signed int a1); User input value, validates as + and - integers
  v11 = readWordSafe_CC078380(97);
  v1 = sub_C80D90AC(6);
  v18 = sub_C80D90AC(7);
  v16 = readSafe_CC078464_offset(115); // 0   readSafe is function in C, offset is rownumber, arrayName = _BYTE byte_CC078464[154]
  v19 = sub_C8108CE4(10000 * v1, v11);
  v15 = v0;
  v20 = sub_C80CBDD0();
  sub_C80E8770();
  switch ( (unsigned __int8)readSafe_CC078464_offset(151) // 0 )
  {
    case 3u:
      v19 = 10 * readSafe_CC078464_offset(157);
      v18 = 0;
      v14 = 0;
      v13 = 0;
      v12 = 0;
      v15 = 100 * readWordSafe_CC078380(99);
      v20 = 0;
      goto LABEL_19;
    default:
      goto LABEL_19;
    case 5u:
      v19 = 10 * readSafe_CC078464_offset(158);
      v18 = 0;
      v14 = 0;
      v13 = 0;
      v12 = 0;
      v15 = 100 * readWordSafe_CC078380(99);
      v20 = 0;
      goto LABEL_19;
    case 0xDu:
    case 0x21u:
      if ( v18 )
      {
        v2 = sub_C80D90AC(6);
        v3 = sub_C80CF7D0(v2);
        v18 = sub_C8108CE4(10000 * v18, v11);
        v14 = sub_C810A21C(1800000000 * v16, 1800000000 * (unsigned __int64)(unsigned int)v16 >> 32, v18, 0);
        v13 = 1800 * v16;
        v12 = sub_C80F1614() + 1800 * v16 + v3;
      }
      else
      {
        v14 = 0;
        v13 = 0;
        v12 = 0;
      }
      goto LABEL_19;
    case 0x1Cu:
    case 0x22u:
      if ( readWordSafe_CC078380(87) )
      {
        v4 = sub_C80D90AC(6);
        v17 = sub_C80CF7D0(v4);
        if ( readSafe_CC078464_offset(184) == 1 )
        {
          v18 = readSafe_CC078298(40);
          v13 = readSafe_CC078298(42);
          v14 = readSafe_CC078298(41);
          v12 = sub_C80F1614() + v17 + v13;
        }
        else
        {
          v18 = 10 * readWordSafe_CC078380(87);
          v12 = readSafe_CC078298(43) + v17;
          v13 = v12 - sub_C80F1614() - v17;
          v14 = sub_C810A21C(1000000 * v13, 1000000 * (unsigned __int64)(unsigned int)v13 >> 32, v18, 0);
          if ( v14 <= 299999 )
          {
            v14 = 300000;
            v13 = 300000 * v18 / 0xF4240u;
            v12 = sub_C80F1614() + v13 + v17;
          }
        }
LABEL_19:
        writeSafe_CC078298(40, v18);
      }
      else
      {
        v18 = 0;
        v14 = 0;
        v13 = 0;
        v12 = 0;
        writeSafe_CC078298(40, 0);
      }
      writeSafe_CC078298(41, v14);
      writeSafe_CC078298(42, v13);
      writeSafe_CC078298(43, v12);
      v6 = cspi_read4bytes(0x24u);
      *(_DWORD *)messagePOD_CC0826A0 = reverse_int_bytes(v6);
      v7 = &messagePOD_CC0826A0[(unsigned __int16)bolusMessageHelper_C80CF318(v19, v15, v18, v14, v13)];
      *v7 = 23;
      v7[1] = 13;
      v7[2] = v20;
      v7[3] = BYTE1(v19);
      v7[4] = v19;
      v7[5] = BYTE3(v15);
      v7[6] = v15 >> 16;
      v7[7] = BYTE1(v15);
      v7[8] = v15;
      v7[9] = BYTE1(v18);
      v7[10] = v18;
      v7[11] = BYTE3(v14);
      v7[12] = (unsigned int)v14 >> 16;
      v7[13] = BYTE1(v14);
      v7[14] = v14;
      len = (_WORD)v7 + 15 - (unsigned int)messagePOD_CC0826A0;
      if ( sub_C80D44DC() )
      {
        messagePOD_CC0826A0[5] = 4 * (sub_C80CB4A0(1) & 0xF) | messagePOD_CC0826A0[5] & 0xC3;
        v9 = __ROR4__(
               ((unsigned int)*(unsigned __int16 *)&messagePOD_CC0826A0[4] >> 10) | (((unsigned __int16)len - 6) << 22),
               22);
        *(_WORD *)&messagePOD_CC0826A0[4] = v9;
        *(_WORD *)&messagePOD_CC0826A0[4] = byteswap_uint16(v9);
        byte_CC082690 = 23;
        result = messagePOD_CC0826A0_addCRC((unsigned __int16)len);
      }
      else
      {
        sub_C80BF300(0, len, messagePOD_CC0826A0);
        sub_C80D9348(0);
        result = reportErrorS(310, 6, 5);
      }
      return result;
    case 0x1Du:
      v19 = 0;
      v5 = 10 * readWordSafe_CC078380(87);
      if ( v5 < readSafe_CC078298(40) )
      {
        if ( readWordSafe_CC078380(87) <= 0 )
        {
          v18 = 0;
          v14 = 0;
          v13 = 0;
          v12 = 0;
        }
        else
        {
          v18 = 10 * readWordSafe_CC078380(87);
          v12 = readSafe_CC078298(43);
          v13 = v12 - sub_C80F1614();
          v14 = sub_C810A21C(1000000 * v13, 1000000 * (unsigned __int64)(unsigned int)v13 >> 32, v18, 0);
          if ( v14 <= 299999 )
          {
            v14 = 300000;
            v13 = 300000 * v18 / 0xF4240u;
            v12 = sub_C80F1614() + v13;
          }
        }
      }
      else
      {
        v18 = readSafe_CC078298(40);
        v13 = readSafe_CC078298(42);
        v12 = sub_C80F1614() + v13;
        v14 = readSafe_CC078298(41);
      }
      goto LABEL_19;
  }
}