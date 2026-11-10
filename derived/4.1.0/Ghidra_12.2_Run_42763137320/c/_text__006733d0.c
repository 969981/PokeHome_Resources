/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006733d0; name: FUN_.text__006733d0
 */


void FUN__text__006733d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN__text__006783e4(param_1[0x2a]);
  FUN__text__006783e4(param_1[0x22]);
  FUN__text__006778d8(param_1 + 0x5f);
  FUN__text__006778d8(param_1 + 0x6f);
  *param_2 = *param_1;
  uVar4 = *(uint *)((long)param_1 + 0x3fc);
  uVar5 = *(uint *)((long)param_2 + 0x3fc) & 0xffffff00 |
          *(uint *)((long)param_2 + 0x3fc) & 0x7f | (uVar4 >> 7 & 1) << 7;
  *(uint *)((long)param_2 + 0x3fc) = uVar5;
  if ((uVar4 >> 7 & 1) != 0) {
    FUN__text__006783e4(param_2[0x42]);
    param_2[0x42] = 0;
    FUN__text__006783e4(param_2[0x43]);
    param_2[0x43] = 0;
    param_2[0x42] = param_1[0x42];
    param_2[0x43] = param_1[0x43];
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    uVar5 = *(uint *)((long)param_2 + 0x3fc);
  }
  uVar4 = *(uint *)((long)param_1 + 0x3fc);
  *(uint *)((long)param_2 + 0x3fc) = uVar5 & 0xfffffe00 | uVar5 & 0xff | (uVar4 >> 8 & 1) << 8;
  if ((uVar4 >> 8 & 1) != 0) {
    FUN__text__006783e4(param_2[0x30]);
    param_2[0x30] = 0;
    FUN__text__006783e4(param_2[0x28]);
    param_2[0x28] = 0;
    FUN__text__006783e4(param_2[0x31]);
    param_2[0x31] = 0;
    FUN__text__006783e4(param_2[0x29]);
    param_2[0x29] = 0;
    param_2[0x30] = param_1[0x30];
    param_2[0x28] = param_1[0x28];
    param_2[0x31] = param_1[0x31];
    param_2[0x29] = param_1[0x29];
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  FUN__text__006783e4(param_2[0x18]);
  param_2[0x18] = 0;
  FUN__text__006783e4(param_2[0x1e]);
  param_2[0x1e] = 0;
  uVar1 = param_1[0x18];
  uVar2 = param_1[0x19];
  uVar3 = param_1[0x1b];
  param_2[0x1a] = param_1[0x1a];
  param_2[0x1b] = uVar3;
  param_2[0x18] = uVar1;
  param_2[0x19] = uVar2;
  uVar1 = param_1[0x1e];
  uVar2 = param_1[0x1f];
  uVar3 = param_1[0x21];
  param_2[0x20] = param_1[0x20];
  param_2[0x21] = uVar3;
  param_2[0x1e] = uVar1;
  param_2[0x1f] = uVar2;
  *(undefined4 *)((long)param_2 + 0x19c) = *(undefined4 *)((long)param_1 + 0x19c);
  *(undefined4 *)(param_2 + 0x33) = *(undefined4 *)(param_1 + 0x33);
  FUN__text__006783e4(param_2[0x1c]);
  param_2[0x1c] = 0;
  param_2[0x1c] = param_1[0x1c];
  param_1[0x1c] = 0;
  FUN__text__0064faf4(param_2);
  *(uint *)((long)param_2 + 0x3fc) = *(uint *)((long)param_2 + 0x3fc) | 2;
  FUN__text__006783e4(param_1[0x42]);
  param_1[0x42] = 0;
  FUN__text__006783e4(param_1[0x43]);
  param_1[0x43] = 0;
  FUN__text__006783e4(param_1[0x44]);
  param_1[0x44] = 0;
  FUN__text__006783e4(param_1[0x30]);
  param_1[0x30] = 0;
  FUN__text__006783e4(param_1[0x28]);
  param_1[0x28] = 0;
  FUN__text__006783e4(param_1[0x31]);
  param_1[0x31] = 0;
  FUN__text__006783e4(param_1[0x29]);
  param_1[0x29] = 0;
  FUN__text__006783e4(param_1[0xc9]);
  param_1[0xc9] = 0;
  FUN__text__00656c1c(param_1 + 0x95,0);
  FUN__text__00656c1c(param_1 + 0x99,0);
  FUN__text__006783e4(param_1[0x9d]);
  param_1[0x9d] = 0;
  return;
}


