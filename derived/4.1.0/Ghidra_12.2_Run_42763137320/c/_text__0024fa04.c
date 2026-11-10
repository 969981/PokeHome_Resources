/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0024fa04; name: FUN_.text__0024fa04
 */


void FUN__text__0024fa04(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_e0 [3];
  long local_c8;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long local_a0 [12];
  
  FUN__text__00128ca0(param_1,0,1);
  FUN__text__00128db0(param_1,0,1);
  local_e0[0] = *(long *)(param_1 + 8);
  FUN__text__0024ec68(&local_c0,local_e0[0],local_e0);
  if (*(long *)(param_1 + 0x708) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x708) + 0x48) + 0x18))();
  }
  *(undefined1 **)(param_1 + 0x708) = local_c0;
  local_c0 = (undefined1 *)0x94f0ab6b70e7ac3f;
  local_b8 = (code *)0x719f5d;
  local_b0 = (code *)0x1c;
  local_a8 = (undefined1 *)0x0;
  FUN__text__00115650(local_e0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_c0,0xb);
  lVar3 = *(long *)(local_e0[0] + 0x60);
  if (lVar3 == 0) {
LAB__text__0024facc:
    (**(code **)(*(long *)(local_e0[0] + 0x48) + 0x18))();
    local_e0[0] = 0;
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    if (local_e0[0] != 0) goto LAB__text__0024facc;
  }
  if (local_a8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_a8 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_c0 = (undefined1 *)0xd9d5b203dd51aa7;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,&local_c0,lVar5);
  uVar1 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(param_1 + 0x110,0x72be60,uVar1,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar3 = FUN__text__0012cb14(param_1 + 0x110,0x72be68);
  pcVar2 = *(code **)(lVar3 + 0x288);
  *(undefined8 *)(lVar3 + 0x108) = 0x200000000;
  local_c0 = &LAB__text__002516cc;
  local_b8 = FUN__text__0025178c;
  *(undefined1 *)(lVar3 + 0x110) = 0;
  local_b0 = FUN__text__00251790;
  local_a8 = &LAB__text__0025179c;
  local_a0[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x290) = 0;
    *(undefined8 *)(lVar3 + 0x298) = 0;
    *(undefined8 *)(lVar3 + 0x280) = 0;
    *(undefined8 *)(lVar3 + 0x288) = 0;
    (*pcVar2)(lVar3 + 0x2a0);
    if (local_b0 == (code *)0x0) goto LAB__text__0024fc2c;
  }
  (*local_b0)(local_a0,lVar3 + 0x2a0);
  *(undefined8 *)(lVar3 + 0x280) = local_c0;
  *(code **)(lVar3 + 0x288) = local_b8;
  *(code **)(lVar3 + 0x290) = local_b0;
  *(undefined1 **)(lVar3 + 0x298) = local_a8;
LAB__text__0024fc2c:
  FUN__text__005e927c(local_e0,0x875298);
  FUN__text__003a1de4(lVar3,local_e0);
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(local_a0);
  }
  return;
}


