/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024fc8c; name: FUN_.text__0024fc8c
 */


void FUN__text__0024fc8c(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  code *local_180;
  code *local_178;
  code *local_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [96];
  code *local_100;
  code *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  long alStack_e0 [12];
  long local_80;
  long local_78;
  code **local_70;
  undefined4 local_64;
  
  uVar6 = *(undefined8 *)(param_1 + 0x700);
  local_80 = *(long *)(param_1 + 0x708);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  FUN__text__0024edf8(&local_78,uVar6,&local_80,param_2);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x708);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  pcVar4 = *(code **)(param_1 + 0x688);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x688) = 0;
    (*pcVar4)(param_1 + 0x6a0);
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0x6a0);
    uVar6 = param_4[3];
    *(undefined8 *)(param_1 + 0x688) = param_4[1];
    *(undefined8 *)(param_1 + 0x698) = uVar6;
    uVar6 = *param_4;
    *(undefined8 *)(param_1 + 0x690) = param_4[2];
    *(undefined8 *)(param_1 + 0x680) = uVar6;
  }
  uVar1 = FUN__text__00307afc(lVar5);
  local_100 = (code *)0x94f0ab6b70e7ac3f;
  local_f8 = (code *)0x719f5d;
  local_f0 = (code *)0x1c;
  local_e8 = (undefined1 *)0x0;
  FUN__text__00115650(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_100,0xb);
  pcVar4 = local_70[0xc];
  if (pcVar4 != (code *)0x0) {
    (**(code **)(*(long *)(pcVar4 + 0x48) + 0x10))();
    if (local_70 == (code **)0x0) goto LAB__text__0024fe00;
  }
  (**(code **)(local_70[9] + 0x18))();
  local_70 = (code **)0x0;
LAB__text__0024fe00:
  if (local_e8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_e8 + 0x48) + 0x18))();
  }
  if (pcVar4 != (code *)0x0) {
    (**(code **)(*(long *)(pcVar4 + 0x48) + 0x10))();
  }
  iVar2 = FUN__text__00308390(lVar5);
  local_100 = (code *)0xd964f203dcee795;
  if (iVar2 != 1) {
    local_100 = (code *)0xd92c9203dcbce0c;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(pcVar4,&local_100,lVar8);
  uVar6 = FUN__text__005f3244(lVar8);
  FUN__text__0012c9f0(param_1 + 0x110,0x72be70,uVar6,0xb);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  pcVar4 = pcVar4 + 0x48;
  (**(code **)(*(long *)pcVar4 + 0x18))(pcVar4);
  local_100 = (code *)0x7e6d8f24f71db797;
  FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_100);
  if (uVar1 < 0xd) {
                    /* WARNING: Could not emulate address calculation at 0x0024ff08 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0024ff18 + (ulong)*(byte *)((ulong)uVar1 + 0x72be38) * 4))();
    return;
  }
  local_100 = (code *)0xfb1adeed5db8022e;
  lVar8 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_100);
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | uVar1 - 0xb < 2;
  }
  (**(code **)(*(long *)pcVar4 + 0x18))(pcVar4);
  FUN__text__00307180(lVar5,&local_100,0xd);
  *(undefined4 *)(param_1 + 0x67c) = 0;
  puVar7 = param_3 + 4;
  local_64 = 1;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 1;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_64 = 2;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 2;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_64 = 3;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 3;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_64 = 4;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 4;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_64 = 5;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 5;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_64 = 6;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 6;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_64 = 7;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 7;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_64 = 8;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 8;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_64 = 9;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 9;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_64 = 10;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 10;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_64 = 0xb;
  local_70 = &local_100;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 0xb;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  local_70 = &local_100;
  local_64 = 0xc;
  uVar3 = (*(code *)*param_3)(puVar7,&local_64,&local_70);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x67c) * 4 + 0x648) = 0xc;
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
  }
  lVar8 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72be78);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | *(int *)(param_1 + 0x67c) != 0;
  FUN__text__00250550(param_1);
  local_100 = FUN__text__002517a8;
  local_f8 = FUN__text__0025185c;
  local_f0 = FUN__text__00251860;
  local_e8 = &LAB__text__0025186c;
  alStack_e0[0] = param_1;
  FUN__text__00128db0(param_1,1,1);
  local_170 = (code *)0x0;
  puStack_168 = (undefined1 *)0x0;
  local_180 = (code *)0x0;
  local_178 = (code *)0x0;
  if (local_f0 != (code *)0x0) {
    (*local_f0)(alStack_e0,auStack_160);
    local_180 = local_100;
    local_178 = local_f8;
    local_170 = local_f0;
    puStack_168 = local_e8;
  }
  FUN__text__0012c3b0(param_1 + 0x110,0x713a5f,&local_180);
  pcVar4 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    puStack_168 = (undefined1 *)0x0;
    local_180 = (code *)0x0;
    local_178 = (code *)0x0;
    (*pcVar4)(auStack_160);
  }
  pcVar4 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar4)(alStack_e0);
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


