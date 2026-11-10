/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001248f0; name: FUN_.text__001248f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001248f0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long local_28;
  
  FUN__text__00126e30();
  lVar2 = _DAT_0089f978;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  param_1[0x11] = param_2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = lVar2 + 0x10;
  param_1[9] = lVar2 + 0xf0;
  param_1[10] = lVar2 + 0x130;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = _DAT_0089f980 + 0x10;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN__text__001199b0(param_1 + 0x1d);
  FUN__text__001199b0(param_1 + 0x42);
  param_1[0x67] = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  param_1[0x6e] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x42] = 0x868fc0;
  lVar2 = FUN__text__005f52b0();
  param_1[0x70] = lVar2;
  param_1[0x76] = 0;
  param_1[0x71] = 0x1fffffffffffffff;
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  lVar2 = FUN__text__005f52b0();
  param_1[0x7c] = lVar2;
  param_1[0x7d] = 0x1fffffffffffffff;
  uVar3 = param_1[0x6b];
  uVar4 = param_1[0x6c] - uVar3;
  param_1[0x82] = 0;
  if (((uVar4 & 0x3ffffffffffffff) != 0) && ((uVar4 & 7) != 0)) {
    uVar4 = uVar3 + (uVar4 & 0x3fffffffffffff8);
    do {
      uVar3 = uVar3 + 8;
    } while (uVar3 <= uVar4);
  }
  param_1[0x88] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  lVar2 = FUN__text__005f52b0();
  param_1[0x8b] = 0x1fffffffffffffff;
  param_1[0x8a] = lVar2;
  param_1[0x90] = 0;
  param_1[0x92] = 0;
  param_1[0x94] = 0;
  lVar2 = FUN__text__005f52b0();
  param_1[0x96] = lVar2;
  param_1[0x97] = 0x1fffffffffffffff;
  uVar3 = param_1[0x85];
  uVar4 = param_1[0x86] - uVar3;
  param_1[0x9c] = 0;
  if (((uVar4 & 0x3ffffffffffffff) != 0) && ((uVar4 & 7) != 0)) {
    uVar4 = uVar3 + (uVar4 & 0x3fffffffffffff8);
    do {
      uVar3 = uVar3 + 8;
    } while (uVar3 <= uVar4);
  }
  param_1[0xa2] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  lVar2 = FUN__text__005f52b0();
  param_1[0xa4] = lVar2;
  param_1[0xaa] = 0;
  param_1[0xa5] = 0x1fffffffffffffff;
  param_1[0xac] = 0;
  param_1[0xae] = 0;
  lVar2 = FUN__text__005f52b0();
  param_1[0xb0] = lVar2;
  param_1[0xb1] = 0x1fffffffffffffff;
  uVar3 = param_1[0x9f];
  uVar4 = param_1[0xa0] - uVar3;
  param_1[0xb6] = 0;
  if (((uVar4 & 0x3ffffffffffffff) != 0) && ((uVar4 & 7) != 0)) {
    uVar4 = uVar3 + (uVar4 & 0x3fffffffffffff8);
    do {
      uVar3 = uVar3 + 8;
    } while (uVar3 <= uVar4);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)((long)param_1 + 0x5c4) = 0;
  lVar2 = *_DAT_0089f4f0;
  param_1[0xb9] = 0;
  lVar2 = *(long *)(lVar2 + 0x78);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__00146048(&local_28,lVar2);
  if (param_1[0x67] != 0) {
    (**(code **)(*(long *)(param_1[0x67] + 0x48) + 0x18))();
  }
  lVar1 = local_28;
  local_28 = 0;
  param_1[0x67] = lVar1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


