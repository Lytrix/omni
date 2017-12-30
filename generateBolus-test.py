import unittest
import generateBolus


class generateBolusTestCase(unittest.TestCase):

    def test_reportError(self):
        # Insert known values
        report = generateBolus.reportError(360, 22, 1, 1)
        print(report)
        self.assertEqual(report, 'error code: 360, *aMaxBasal, *anonymous_0,value: 1')


if __name__ == "__main__":
    unittest.main()
