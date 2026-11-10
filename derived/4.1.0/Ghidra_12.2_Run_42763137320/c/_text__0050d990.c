/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050d990; name: FUN_.text__0050d990
 */


undefined8 * FUN__text__0050d990(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  for (puVar1 = (undefined8 *)*param_1; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x640]) {
    if (puVar1[0x642] != 0) goto LAB__text__0050dc98;
  }
  puVar1 = (undefined8 *)FUN__text__00400f80(10,0x3218);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar1[0x640] = 0;
  puVar1[0x32] = puVar1 + 0x19;
  puVar1[0x4b] = puVar1 + 0x32;
  puVar1[100] = puVar1 + 0x4b;
  puVar1[0x7d] = puVar1 + 100;
  puVar1[0x96] = puVar1 + 0x7d;
  puVar1[0xaf] = puVar1 + 0x96;
  puVar1[200] = puVar1 + 0xaf;
  puVar1[0xe1] = puVar1 + 200;
  puVar1[0xfa] = puVar1 + 0xe1;
  puVar1[0x113] = puVar1 + 0xfa;
  puVar1[300] = puVar1 + 0x113;
  puVar1[0x145] = puVar1 + 300;
  puVar1[0x15e] = puVar1 + 0x145;
  puVar1[0x177] = puVar1 + 0x15e;
  puVar1[400] = puVar1 + 0x177;
  puVar1[0x1a9] = puVar1 + 400;
  puVar1[0x1c2] = puVar1 + 0x1a9;
  puVar1[0x1db] = puVar1 + 0x1c2;
  puVar1[500] = puVar1 + 0x1db;
  puVar1[0x20d] = puVar1 + 500;
  puVar1[0x226] = puVar1 + 0x20d;
  puVar1[0x23f] = puVar1 + 0x226;
  puVar1[600] = puVar1 + 0x23f;
  puVar1[0x271] = puVar1 + 600;
  puVar1[0x28a] = puVar1 + 0x271;
  puVar1[0x2a3] = puVar1 + 0x28a;
  puVar1[700] = puVar1 + 0x2a3;
  puVar1[0x2d5] = puVar1 + 700;
  puVar1[0x2ee] = puVar1 + 0x2d5;
  puVar1[0x307] = puVar1 + 0x2ee;
  puVar1[800] = puVar1 + 0x307;
  puVar1[0x339] = puVar1 + 800;
  puVar1[0x352] = puVar1 + 0x339;
  puVar1[0x36b] = puVar1 + 0x352;
  puVar1[900] = puVar1 + 0x36b;
  puVar1[0x39d] = puVar1 + 900;
  puVar1[0x3b6] = puVar1 + 0x39d;
  puVar1[0x3cf] = puVar1 + 0x3b6;
  puVar1[1000] = puVar1 + 0x3cf;
  puVar1[0x401] = puVar1 + 1000;
  puVar1[0x41a] = puVar1 + 0x401;
  puVar1[0x433] = puVar1 + 0x41a;
  puVar1[0x44c] = puVar1 + 0x433;
  puVar1[0x465] = puVar1 + 0x44c;
  puVar1[0x47e] = puVar1 + 0x465;
  puVar1[0x497] = puVar1 + 0x47e;
  puVar1[0x4b0] = puVar1 + 0x497;
  puVar1[0x4c9] = puVar1 + 0x4b0;
  puVar1[0x4e2] = puVar1 + 0x4c9;
  puVar1[0x4fb] = puVar1 + 0x4e2;
  puVar1[0x514] = puVar1 + 0x4fb;
  puVar1[0x52d] = puVar1 + 0x514;
  puVar1[0x546] = puVar1 + 0x52d;
  puVar1[0x55f] = puVar1 + 0x546;
  puVar1[0x578] = puVar1 + 0x55f;
  puVar1[0x591] = puVar1 + 0x578;
  puVar1[0x5aa] = puVar1 + 0x591;
  puVar1[0x5c3] = puVar1 + 0x5aa;
  puVar1[0x5dc] = puVar1 + 0x5c3;
  puVar1[0x5f5] = puVar1 + 0x5dc;
  puVar1[0x60e] = puVar1 + 0x5f5;
  puVar1[0x627] = puVar1 + 0x60e;
  *puVar1 = 0;
  puVar1[0x19] = puVar1;
  puVar1[0x642] = puVar1 + 0x627;
  *(undefined4 *)(puVar1 + 0x641) = 0x40;
  if (*param_1 == 0) {
    *param_1 = (long)puVar1;
    puVar1[0x640] = 0;
    puVar2 = (undefined8 *)puVar1[0x642];
  }
  else {
    puVar1[0x640] = *param_1;
    *param_1 = (long)puVar1;
LAB__text__0050dc98:
    puVar2 = (undefined8 *)puVar1[0x642];
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar1[0x642] = *puVar2;
    *puVar2 = 0;
    *(int *)(puVar1 + 0x641) = *(int *)(puVar1 + 0x641) + -1;
  }
  return puVar2;
}


