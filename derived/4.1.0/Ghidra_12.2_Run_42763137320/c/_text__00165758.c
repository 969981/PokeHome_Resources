/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165758; name: FUN_.text__00165758
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00165758(long param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  FUN__text__00306608(*param_3,*(undefined8 *)(param_1 + 0x170));
  iVar1 = FUN__text__0030680c(*param_3);
  if (iVar1 == 0) {
    uVar9 = 0;
  }
  else if (iVar1 == 1) {
    uVar9 = 1;
  }
  else {
    iVar1 = FUN__text__0016a530();
    uVar9 = (uint)(iVar1 == 5) << 1;
  }
  uVar5 = FUN__text__003069d0(*param_3);
  uVar2 = FUN__text__0016ad94(uVar5,0);
  uVar3 = FUN__text__0016ae08(*_DAT_0089f560);
  FUN__text__00156ff8(*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x170),uVar2,uVar3)
  ;
  uVar5 = FUN__text__00157128(*(undefined8 *)(param_1 + 0x198));
  lVar8 = *(long *)(param_1 + 0x170);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar4 = FUN__text__00601370(*(undefined8 *)(param_1 + 0x178),0x402);
  iVar1 = FUN__text__0016a530();
  if ((iVar1 - 2U < 5) || (iVar1 == 10)) {
    uVar6 = FUN__text__005f3228(lVar8,*(undefined8 *)(param_1 + 0x178));
    if ((uVar6 & 1) == 0) {
      uVar9 = uVar9 | 0x200;
      uVar4 = *(uint *)(param_1 + 0x1a0);
    }
    else {
      uVar9 = uVar4 & 0x1f;
      uVar4 = *(uint *)(param_1 + 0x1a0);
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x1a0);
  }
  if (param_2 < uVar4) {
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) = (ulong)uVar9;
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar5);
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar7 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar7 + 0x12) = *(ushort *)(lVar7 + 0x12) & 0xfffe;
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001658a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return;
}


