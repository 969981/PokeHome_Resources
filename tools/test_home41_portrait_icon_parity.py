import unittest
from PIL import Image, ImageDraw
from home41_portrait_icon_parity import compare, metrics, premul

class Parity(unittest.TestCase):
    def test_exact_resize(self):
        p=Image.new("RGBA",(512,512))
        ImageDraw.Draw(p).rectangle((64,64,447,447),fill=(230,40,15,255))
        q=p.resize((112,112),Image.Resampling.LANCZOS)
        r=compare(p,q)
        self.assertEqual(r["category"],"exact_canvas_visual")
        self.assertEqual(r["candidates"]["canvas_LANCZOS"]["premul_mae"],0)
    def test_hidden_rgb(self):
        p=Image.new("RGBA",(112,112),(255,0,0,0))
        q=Image.new("RGBA",(112,112),(0,0,255,0))
        r=metrics(p,q,premul(q))
        self.assertFalse(r["rgba_exact"])
        self.assertTrue(r["visual_exact"])
        self.assertEqual(r["premul_mae"],0)
        self.assertEqual(sum(r["alpha_diff_histogram"]),112*112)
    def test_alpha_difference(self):
        p=Image.new("RGBA",(112,112),(255,0,0,255))
        q=Image.new("RGBA",(112,112),(255,0,0,0))
        r=metrics(p,q,premul(q))
        self.assertEqual(r["alpha_mae"],255)
        self.assertEqual(r["silhouette_iou"],0)
    def test_composition_alignment(self):
        p=Image.new("RGBA",(512,512))
        ImageDraw.Draw(p).rectangle((32,64,287,319),fill=(90,160,210,255))
        q=Image.new("RGBA",(112,112))
        ImageDraw.Draw(q).rectangle((40,40,95,95),fill=(90,160,210,255))
        r=compare(p,q)
        self.assertLess(r["candidates"][r["best_any"]]["premul_mae"],r["candidates"][r["best_canvas"]]["premul_mae"])
if __name__=="__main__": unittest.main()
