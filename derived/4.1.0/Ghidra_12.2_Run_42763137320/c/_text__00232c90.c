/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00232c90; name: FUN_.text__00232c90
 */


void FUN__text__00232c90(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  void *__src;
  long *plVar8;
  long lVar9;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  
  lVar7 = *(long *)(param_1 + 0x2d0);
  param_2 = param_2 & 0xffffffff;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar3 = FUN__text__0012cce4(param_1 + 0x110,0x72a8d8);
  if (param_3 == 0) {
    lVar9 = param_2 * 0x828;
    memcpy(&local_138,(void *)(lVar9 + 0x729848),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    local_140 = 0;
    FUN__text__003a85e0(uVar3,&local_140,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729918),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    local_140 = 0x100000000;
    FUN__text__003a85e0(uVar3,&local_140,0);
    memcpy(&local_138,(void *)(lVar9 + 0x7299e8),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    local_140 = 0x200000000;
    FUN__text__003a85e0(uVar3,&local_140,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729ab8),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    local_140 = 0x300000000;
    FUN__text__003a85e0(uVar3,&local_140,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729b88),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    local_140 = 0x400000000;
    FUN__text__003a85e0(uVar3,&local_140,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729c58),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    local_140 = 0x500000000;
    FUN__text__003a85e0(uVar3,&local_140,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729d28),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    local_140 = 0x600000000;
    FUN__text__003a85e0(uVar3,&local_140,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729df8),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    local_140 = 0x700000000;
    FUN__text__003a85e0(uVar3,&local_140,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729ec8),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    local_140 = 0x800000000;
    FUN__text__003a85e0(uVar3,&local_140,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729f98),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    local_140 = 0x900000000;
    FUN__text__003a85e0(uVar3,&local_140,0);
  }
  else {
    lVar9 = param_2 * 0x828;
    memcpy(&local_138,(void *)(lVar9 + 0x729848),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729918),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    memcpy(&local_138,(void *)(lVar9 + 0x7299e8),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729ab8),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729b88),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729c58),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729d28),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729df8),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729ec8),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
    memcpy(&local_138,(void *)(lVar9 + 0x729f98),0xd0);
    FUN__text__003c7c60(lVar7,&local_138,0);
  }
  lVar9 = 0;
  iVar2 = *(int *)(*(long *)(param_1 + 0x640) + 0xc);
  __src = (void *)(param_2 * 0x828 + 0x729848);
  do {
    uVar1 = (ulong)(uint)(param_3 * 10 + iVar2 * 10) + lVar9;
    uVar4 = FUN__text__0022cc74(*(undefined8 *)(param_1 + 0x650),uVar1 & 0xffffffff);
    if ((uVar4 & 1) == 0) {
      return;
    }
    piVar5 = (int *)FUN__text__0022ccb8(*(undefined8 *)(param_1 + 0x650),uVar1 & 0xffffffff);
    if (param_3 == 0) {
      uStack_134 = (undefined4)lVar9;
      local_138 = 0;
      FUN__text__003a85e0(uVar3,&local_138,1);
    }
    memcpy(&local_138,__src,0xd0);
    FUN__text__003c7c60(lVar7,&local_138,1);
    FUN__text__00233500(param_1,&local_138,uVar1 & 0xffffffff);
    iVar6 = *piVar5;
    if (iVar6 == 0) {
      FUN__text__002336bc(param_1,&local_138);
      iVar6 = *piVar5;
      if (iVar6 != 1) goto LAB__text__0023316c;
LAB__text__002331c0:
      FUN__text__00233848(param_1,&local_138);
      iVar6 = *piVar5;
      if (iVar6 != 2) goto LAB__text__00233174;
LAB__text__002331ec:
      FUN__text__002339c0(param_1,&local_138,uVar1 & 0xffffffff,0);
      if (*piVar5 != 3) goto LAB__text__0023317c;
LAB__text__0023320c:
      if (piVar5[0x46b1] - 1U < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00233230 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__0023323c +
                  (ulong)*(byte *)((ulong)(piVar5[0x46b1] - 1U) + 0x7296f8) * 4))();
        return;
      }
      FUN__text__00233e3c(param_1,&local_138);
      iVar6 = *piVar5;
    }
    else {
      if (iVar6 == 1) goto LAB__text__002331c0;
LAB__text__0023316c:
      if (iVar6 == 2) goto LAB__text__002331ec;
LAB__text__00233174:
      if (iVar6 == 3) goto LAB__text__0023320c;
LAB__text__0023317c:
      iVar6 = *piVar5;
    }
    if (iVar6 == 4) {
      FUN__text__00234618(param_1,&local_138);
      iVar6 = *piVar5;
    }
    if (iVar6 == 5) {
      FUN__text__002339c0(param_1,&local_138,uVar1 & 0xffffffff,1);
      iVar6 = *piVar5;
    }
    if (iVar6 == 6) {
      FUN__text__00233848(param_1,&local_138);
      iVar6 = *piVar5;
    }
    if (iVar6 == 7) {
      FUN__text__00233848(param_1,&local_138);
    }
    lVar9 = lVar9 + 1;
    __src = (void *)((long)__src + 0xd0);
    if (lVar9 == 10) {
      return;
    }
  } while( true );
}


