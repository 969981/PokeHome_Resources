/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165c48; name: FUN_.text__00165c48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00165c48(long param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN__text__00306618(*param_3,*(undefined8 *)(param_1 + 0x170));
  iVar1 = FUN__text__003069e0(*param_3);
  uVar4 = FUN__text__003069d0(*param_3);
  uVar2 = FUN__text__0016ad94(uVar4,0);
  uVar3 = FUN__text__0016ae08(*_DAT_0089f560);
  FUN__text__00156ff8(*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x170),uVar2,uVar3)
  ;
  uVar4 = FUN__text__00157128(*(undefined8 *)(param_1 + 0x198));
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) = (ulong)(iVar1 == 1);
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar4);
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar5 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar5 + 0x12) = *(ushort *)(lVar5 + 0x12) & 0xfffe;
  }
  return;
}


