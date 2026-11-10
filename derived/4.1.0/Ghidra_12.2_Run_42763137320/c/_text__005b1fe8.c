/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b1fe8; name: FUN_.text__005b1fe8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b1fe8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN__text__0059fdc0();
  plVar1 = param_1 + 0x1c;
  param_1[0x15] = 0;
  param_1[0x1b] = 0x200000000;
  plVar5 = param_1 + 0x16;
  *plVar5 = 0;
  lVar2 = _DAT_008a5650;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = lVar2 + 0x10;
  param_1[9] = lVar2 + 0x70;
  param_1[0x17] = 0;
  param_1[0x18] = -1;
  FUN__text__006f5094(plVar1);
  FUN__text__006f56cc(param_1 + 0xe3);
  FUN__text__006f56cc(param_1 + 0xee);
  FUN__text__006f55f8(param_1 + 0xf9);
  FUN__text__006f55f8(param_1 + 0x104);
  *(undefined2 *)(param_1 + 0x113) = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  nn::vi::OpenDefaultDisplay((Display **)(param_1 + 0x111));
  nn::vi::CreateLayer((Layer **)(param_1 + 0x112),(Display *)param_1[0x111]);
  nn::vi::GetNativeWindow((void **)(param_1 + 0xe0),(Layer *)param_1[0x112]);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  FUN__text__006ebe14(&local_a0);
  uVar4 = _DAT_008a0448;
  local_88 = param_1[0x112];
  local_98 = param_2[1];
  local_a0 = CONCAT44(0xb01,(undefined4)local_a0);
  local_a0 = CONCAT71(local_a0._1_7_,2);
  uVar6 = *(undefined8 *)(*_DAT_008a0228 + 0x10);
  uVar3 = FUN__text__006f5014(_DAT_008a0448,&local_a0);
  uVar4 = FUN__text__006f4fcc(uVar4,&local_a0);
  FUN__text__005a5684(&local_c0,uVar6,1,uVar3,uVar4);
  *plVar5 = local_c0;
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
  }
  lVar2 = local_b8;
  local_c0 = 0;
  local_b8 = 0;
  param_1[0x17] = lVar2;
  param_1[0x18] = local_b0;
  param_1[0x19] = local_a8;
  local_b0 = 0xffffffffffffffff;
  local_a8 = 0;
  FUN__text__005b509c(&local_c0);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  uVar3 = FUN__text__005b50f0(plVar5);
  uVar4 = _DAT_008a0448;
  FUN__text__006f50b0(plVar1,_DAT_008a0448,&local_a0,uVar3,param_1[0x18],param_1[0x19]);
  FUN__text__006f54e0(plVar1,param_1 + 0x10f,2);
  FUN__text__006f5430(plVar1,param_1 + 0xe1,2);
  local_a0 = 0;
  local_98 = 0;
  FUN__text__006ebe3c(&local_a0);
  FUN__text__006f56ec(param_1 + 0xe3,uVar4,&local_a0);
  FUN__text__006f56ec(param_1 + 0xee,uVar4,&local_a0);
  local_a0 = 0;
  local_98 = 0;
  FUN__text__006ebe38(&local_a0);
  FUN__text__006f5618(param_1 + 0xf9,uVar4,&local_a0);
  FUN__text__006f5618(param_1 + 0x104,uVar4,&local_a0);
  local_80 = param_2[4];
  uStack_78 = param_2[5];
  local_70 = param_2[6];
  uStack_68 = param_2[7];
  local_a0 = *param_2;
  local_98 = param_2[1];
  local_88 = CONCAT44(0x1307,(int)param_2[3]);
  local_90 = CONCAT44((int)((ulong)param_2[2] >> 0x20),0x1307);
  FUN__text__00146470(&local_c0,param_1[1],&local_a0);
  if (param_1[0x15] != 0) {
    (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
  }
  param_1[0x15] = local_c0;
  return;
}


