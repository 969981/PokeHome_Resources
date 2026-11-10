/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00239cd8; name: FUN_.text__00239cd8
 */


void FUN__text__00239cd8(long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_28;
  
  FUN__text__00128ca0(param_1,1,1);
  iVar1 = *(int *)(*(long *)(param_1 + 0x650) + 0x74);
  iVar4 = FUN__text__00227bb4(*(undefined8 *)(param_1 + 0x640));
  if (0 < iVar4 != (*(char *)(*(long *)(param_1 + 0x2ec8) + 0x15a) != '\0')) {
    *(bool *)(*(long *)(param_1 + 0x2ec8) + 0x15a) = 0 < iVar4;
    FUN__text__003a14e8();
  }
  if (iVar4 + 1 < iVar1 != (*(char *)(*(long *)(param_1 + 0x2ed0) + 0x15a) != '\0')) {
    *(bool *)(*(long *)(param_1 + 0x2ed0) + 0x15a) = iVar4 + 1 < iVar1;
    FUN__text__003a14e8();
  }
  uVar5 = FUN__text__00227bf0(*(undefined8 *)(param_1 + 0x640),0,
                              *(undefined4 *)(*(long *)(param_1 + 0x650) + 0x74));
  piVar6 = (int *)FUN__text__0022ccb8(*(undefined8 *)(param_1 + 0x650),uVar5);
  if (*piVar6 == 5 || *piVar6 == 2) {
    uVar2 = *(uint *)(param_1 + 0x764);
    uVar5 = FUN__text__00227bf0(*(undefined8 *)(param_1 + 0x640),0,
                                *(undefined4 *)(*(long *)(param_1 + 0x650) + 0x74));
    lVar7 = FUN__text__0022ccb8(*(undefined8 *)(param_1 + 0x650),uVar5);
    local_28 = 0xa393a9f060c3e94b;
    bVar3 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 100) == 0;
    uVar8 = FUN__text__0012ce7c(param_1 + 0x110,&local_28);
    FUN__text__003a14e8(uVar8,bVar3);
    local_28 = 0xa393a9f060c3e94b;
    uVar8 = FUN__text__0012ce7c(param_1 + 0x110,&local_28);
    FUN__text__003a14e8(uVar8,!bVar3);
    *(bool *)(*(long *)(param_1 + 0x7a0) + 0x15a) = *(int *)(param_1 + 0x764) != 0;
    *(bool *)(*(long *)(param_1 + 0x7a8) + 0x15a) = *(int *)(param_1 + 0x764) != 1;
    *(bool *)(*(long *)(param_1 + 0x7b0) + 0x15a) = *(int *)(param_1 + 0x764) != 2;
  }
  return;
}


