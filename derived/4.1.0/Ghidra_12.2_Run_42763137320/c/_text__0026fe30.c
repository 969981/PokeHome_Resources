/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026fe30; name: FUN_.text__0026fe30
 */


void FUN__text__0026fe30(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  local_48 = 0x1000101;
  local_44 = 1;
  local_58 = 0;
  local_50 = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x2d0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_68 = CONCAT44(local_68._4_4_,0x100);
  FUN__text__00111970(&local_60,*(undefined8 *)(param_1 + 8),&local_68);
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar3 = (long *)(**(code **)*puVar6)(puVar6);
  plVar4 = (long *)FUN__text__0012615c();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
  }
  FUN__text__001156d0(&local_68,*(undefined8 *)(puVar6[0xaf] + 0xb0),0);
  lVar7 = *(long *)(local_68 + 0x60);
  if ((lVar7 == 0) || ((**(code **)(*(long *)(lVar7 + 0x48) + 0x10))(), local_68 != 0)) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  lVar8 = *(long *)(lVar5 + 0x2e8);
  local_68 = 0x1f669d6d4d9284b8;
  if (lVar8 == 0) {
    FUN__text__005f2d98(lVar7,&local_68,0);
    lVar8 = *(long *)(lVar5 + 0x2e0);
  }
  else {
    plVar3 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN__text__005f2d98(lVar7,&local_68,lVar8);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar8 = *(long *)(lVar5 + 0x2e0);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar2 = FUN__text__003277e0();
  FUN__text__00166508(lVar8,0,uVar2,4,0,1);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar8 = *(long *)(lVar5 + 0x2e0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar1 = local_60;
  lVar9 = *(long *)(lVar5 + 0x2e8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN__text__00163fb4(lVar8,lVar1,lVar9);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  local_48 = CONCAT31(local_48._1_3_,1);
  local_50 = CONCAT44(local_50._4_4_,1);
  local_58 = local_60;
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0x80),&local_58);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x80),0);
  plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x640) + 0x60);
  (**(code **)(*plVar3 + 8))(plVar3,0);
  lVar8 = FUN__text__00321ac0();
  *(undefined4 *)(lVar8 + 0x79fc8) = 0;
  *(undefined4 *)(param_1 + 0x78) = 9;
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


