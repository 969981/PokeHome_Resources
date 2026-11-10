/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00136b34; name: FUN_.text__00136b34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00136b34(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x110;
  uVar4 = FUN__text__005f3244(*(undefined8 *)
                               (*(long *)(param_1 + 0x6d0) + (long)*(int *)(param_1 + 0x6e0) * 0x18)
                             );
  FUN__text__0012c9f0(lVar1,0x7219f8,uVar4,0xb);
  pcVar6 = *(char **)(*(long *)(param_1 + 0x6d0) + (long)*(int *)(param_1 + 0x6e0) * 0x18 + 8);
  if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
    pcVar6 = *(char **)(*(long *)(param_1 + 0x6d0) + (long)*(int *)(param_1 + 0x6e0) * 0x18 + -0x10)
    ;
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) goto LAB__text__00136c50;
    puVar5 = (undefined8 *)&DAT_008aa488;
  }
  else {
    uVar4 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x721a00);
    lVar7 = *(long *)(param_1 + 0x590);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN__text__003d0ed4(lVar7,pcVar6,uVar4,0,0);
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    pcVar6 = *(char **)(*(long *)(param_1 + 0x6d0) + (long)*(int *)(param_1 + 0x6e0) * 0x18 + -0x10)
    ;
    puVar5 = (undefined8 *)&DAT_008aa480;
    if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) goto LAB__text__00136c50;
  }
  FUN__text__0012c300(lVar1,*puVar5);
LAB__text__00136c50:
  iVar3 = *(int *)(param_1 + 0x6e0);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x6d0) + (long)iVar3 * 0x18 + 0x10);
  if ((iVar3 == 0) ||
     (*(uint *)(*(long *)(param_1 + 0x6d0) + (long)(iVar3 + -1) * 0x18 + 0x10) != uVar2)) {
    FUN__text__0012c300(lVar1,*(undefined8 *)(_DAT_0089fb68 + (ulong)uVar2 * 8));
    return;
  }
  return;
}


