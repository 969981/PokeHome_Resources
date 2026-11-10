/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b0764; name: FUN_.text__003b0764
 */


void FUN__text__003b0764(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_28;
  
  if (*(code **)(param_1 + 0x3c0) != (code *)0x0) {
    (**(code **)(param_1 + 0x3c0))(param_1 + 0x3e0);
  }
  if (*(char *)(param_1 + 0x852) == '\0') {
    FUN__text__003a1590(param_1);
  }
  *(undefined1 *)(param_1 + 0x85) = 0;
  FUN__text__003a1648(param_1,1);
  puVar1 = (undefined8 *)(param_1 + 0x7ac);
  iVar2 = FUN__text__003b7340(*(undefined8 *)(param_1 + 0x800),puVar1);
  uVar3 = FUN__text__003b7414(*(long *)(param_1 + 0x800),
                              *(undefined4 *)(*(long *)(param_1 + 0x800) + 0x14),
                              (int)(*(float *)(*(long *)(param_1 + 0x748) + 0x1d4) + (float)iVar2));
  uVar4 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x50))();
  if (uVar4 <= uVar3) {
    FUN__text__003a14e8(*(undefined8 *)(param_1 + 2000),0);
  }
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  lVar7 = *(long *)(param_1 + 0x800);
  *(undefined8 *)(param_1 + 0x8f0) = *puVar1;
  uVar5 = FUN__text__003b7414(lVar7,*(undefined4 *)(lVar7 + 0x14),*(undefined4 *)(lVar7 + 0x10));
  local_28 = FUN__text__003b7494(lVar7,uVar5);
  iVar2 = FUN__text__003b7340(lVar7,&local_28);
  uVar8 = *(undefined8 *)(param_1 + 0x800);
  uVar5 = FUN__text__003b73b4(uVar8,puVar1);
  local_28 = FUN__text__003b7494(uVar8,uVar5);
  iVar6 = FUN__text__003b7340(uVar8,&local_28);
  FUN__text__003b9248((float)((iVar6 - iVar2) + *(int *)(*(long *)(param_1 + 0x800) + 0x10)),
                      *(undefined8 *)(param_1 + 0x748),*(undefined4 *)(param_1 + 0x8a4));
  *(undefined1 *)(param_1 + 0xa14) = 1;
  return;
}


