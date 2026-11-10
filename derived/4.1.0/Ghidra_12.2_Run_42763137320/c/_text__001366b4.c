/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001366b4; name: FUN_.text__001366b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001366b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *local_150;
  code *local_148;
  code *local_140;
  undefined1 *puStack_138;
  undefined1 auStack_130 [96];
  code *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  
  pcVar7 = *(code **)(param_1 + 0x658);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
    *(undefined8 *)(param_1 + 0x658) = 0;
    (*pcVar7)(param_1 + 0x670);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x670);
    uVar8 = param_2[3];
    *(undefined8 *)(param_1 + 0x658) = param_2[1];
    *(undefined8 *)(param_1 + 0x668) = uVar8;
    uVar8 = *param_2;
    *(undefined8 *)(param_1 + 0x660) = param_2[2];
    *(undefined8 *)(param_1 + 0x650) = uVar8;
  }
  uVar8 = param_2[0x10];
  uVar3 = *(undefined4 *)(param_2 + 0x11);
  lVar1 = param_1 + 0x110;
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  *(undefined4 *)(param_1 + 0x6d8) = uVar3;
  *(undefined8 *)(param_1 + 0x6d0) = uVar8;
  lVar6 = FUN__text__0012cb14(lVar1,0x7219f0);
  *(undefined1 *)(lVar6 + 0x110) = 0;
  *(undefined8 *)(lVar6 + 0x108) = 0x300000000;
  uVar8 = FUN__text__005f3244(*(undefined8 *)
                               (*(long *)(param_1 + 0x6d0) + (long)*(int *)(param_1 + 0x6e0) * 0x18)
                             );
  FUN__text__0012c9f0(lVar1,0x7219f8,uVar8,0xb);
  local_d0 = FUN__text__001376f8;
  local_c8 = FUN__text__00137734;
  local_c0 = FUN__text__00137738;
  local_b8 = &LAB__text__00137744;
  alStack_b0[0] = param_1;
  FUN__text__00128db0(param_1,1,1);
  pcVar9 = *(char **)(*(long *)(param_1 + 0x6d0) + (long)*(int *)(param_1 + 0x6e0) * 0x18 + 8);
  if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
    pcVar9 = (char *)0x0;
  }
  puVar2 = _DAT_0089fb60;
  if (pcVar9 != (char *)0x0) {
    puVar2 = _DAT_0089fb60 + 2;
  }
  uVar8 = *puVar2;
  local_150 = (code *)0x0;
  local_148 = (code *)0x0;
  local_140 = (code *)0x0;
  puStack_138 = (undefined1 *)0x0;
  if (local_c0 != (code *)0x0) {
    (*local_c0)(alStack_b0,auStack_130);
    local_150 = local_d0;
    local_148 = local_c8;
    local_140 = local_c0;
    puStack_138 = local_b8;
  }
  FUN__text__0012c3b0(lVar1,uVar8,&local_150);
  pcVar7 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (code *)0x0;
    local_148 = (code *)0x0;
    (*pcVar7)(auStack_130);
  }
  if (pcVar9 != (char *)0x0) {
    uVar8 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x721a00);
    lVar6 = *(long *)(param_1 + 0x590);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN__text__003d0ed4(lVar6,pcVar9,uVar8,0,0);
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  FUN__text__0012c300(lVar1,0x70ac84);
  FUN__text__0012c300(lVar1,0x71029e);
  FUN__text__0012c300(lVar1,0x70b700);
  iVar5 = *(int *)(param_1 + 0x6e0);
  uVar4 = *(uint *)(*(long *)(param_1 + 0x6d0) + (long)iVar5 * 0x18 + 0x10);
  if ((iVar5 == 0) ||
     (*(uint *)(*(long *)(param_1 + 0x6d0) + (long)(iVar5 + -1) * 0x18 + 0x10) != uVar4)) {
    FUN__text__0012c300(lVar1,*(undefined8 *)(_DAT_0089fb68 + (ulong)uVar4 * 8));
  }
  pcVar7 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar7)(alStack_b0);
  }
  FUN__text__005e927c(&local_d0,0x869a98);
  FUN__text__003c1e4c(&local_d0);
  if (local_b8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  return;
}


