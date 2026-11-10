/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00502594; name: FUN_.text__00502594
 */


long FUN__text__00502594(long *param_1,int param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uStack_31;
  
  plVar1 = param_1 + 0x13;
  FUN__text__004ffa40(plVar1);
  uVar2 = FUN__text__00501574(plVar1,param_3 + 8);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0050261c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (**(code **)(*param_1 + 0x120))(param_1);
    return lVar3;
  }
  FUN__text__004f5550(param_1);
  if ((char)param_1[0x19] == '\0') goto LAB__text__00502680;
  iVar6 = (int)param_1[0x18];
  if ((param_1[0xf] == 0) || (*(long *)(param_1[0xf] + 0x18) == 0)) {
    if ((param_2 == 3) && (iVar6 != 0)) goto LAB__text__0050262c;
  }
  else {
    if (param_2 != 3) goto LAB__text__00502654;
LAB__text__0050262c:
    thunk_FUN__text__004ffd60(plVar1);
    if ((char)param_1[0x19] == '\0') goto LAB__text__00502680;
    iVar6 = (int)param_1[0x18];
    if ((param_1[0xf] != 0) && (*(long *)(param_1[0xf] + 0x18) != 0)) goto LAB__text__00502654;
  }
  if (iVar6 != 0) {
LAB__text__00502654:
    lVar3 = FUN__text__00502238(param_1,&uStack_31);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) != 0)) {
      return lVar3;
    }
    FUN__text__004f5550(param_1);
    return 0;
  }
LAB__text__00502680:
  lVar3 = param_1[0xf];
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(long *)(*(long *)(lVar3 + 0x18) + 0x78) + 0x20);
  }
  uVar4 = FUN__text__004f79c0(param_1[0x12],uVar5,0);
  lVar3 = FUN__text__00502860(param_1,uVar4,lVar3,0,0);
  return lVar3;
}


