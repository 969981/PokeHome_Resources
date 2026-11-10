/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ef168; name: FUN_.text__005ef168
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ef168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 local_320;
  long local_318;
  long local_310;
  code *local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [96];
  long local_290;
  code *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [336];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  *(undefined8 *)(param_1 + 600) = param_2;
  *(undefined8 *)(param_1 + 0x260) = param_3;
  *(undefined8 *)(param_1 + 0x268) = param_4;
  local_b0 = *(long *)(param_1 + 8);
  FUN__text__0014f410(&local_320,local_b0,&local_b0);
  if (*(long *)(param_1 + 0x270) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x270) + 0x48) + 0x18))();
  }
  local_280 = 0;
  uStack_278 = 0;
  local_290 = 0;
  local_288 = (code *)0x0;
  *(long *)(param_1 + 0x270) = local_320;
  local_310 = 0;
  local_308 = (code *)0x0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_320 = _DAT_0089f4c8 + 0x10;
  local_318 = 0;
  FUN__text__0010d010(&local_b0,_DAT_0089f558,0x7185f6,0x70f683);
  lVar6 = *_DAT_0089f550;
  lVar7 = *(long *)(lVar6 + 8);
  if (*(long *)(lVar6 + 0x1c8) != 0) {
    lVar7 = *(long *)(lVar6 + 0x1c8);
  }
  FUN__text__0010a590(&local_100,lVar6,0,&local_b0,0,lVar7,0);
  if (local_318 != 0) {
    (**(code **)(*(long *)(local_318 + 0x48) + 0x18))();
  }
  local_318 = local_100;
  if (local_100 != 0) {
    plVar14 = (long *)(local_100 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    if (local_310 != 0 || local_290 != 0) {
      FUN__text__005d9010(local_100,&local_320,1);
    }
    FUN__text__005d8de0(local_100);
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))(plVar14);
  }
  if ((local_98 != 0) && (local_b0 != 0)) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  local_b0 = 0;
  uStack_a8 = 0xcbf29ce484222645;
  local_a0 = 0x70f683;
  local_98 = 0;
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  FUN__text__005a2048(&local_b0,*(undefined8 *)(param_1 + 8),1);
  local_b0 = _DAT_008a5be8 + 0x10;
  FUN__text__0014f530(*(undefined8 *)(param_1 + 0x270),&local_320,&local_b0);
  local_320 = _DAT_0089f4a8 + 0x10;
  if (local_318 == 0) {
    local_318 = 0;
    pcVar3 = local_288;
  }
  else {
    FUN__text__005d9290(local_318,&local_320);
    lVar7 = local_318;
    local_318 = 0;
    pcVar3 = local_288;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
      pcVar3 = local_288;
    }
  }
  local_288 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    local_280 = 0;
    uStack_278 = 0;
    local_290 = 0;
    local_288 = (code *)0x0;
    (*pcVar3)(auStack_270);
  }
  pcVar3 = local_308;
  if (local_308 != (code *)0x0) {
    local_300 = 0;
    uStack_2f8 = 0;
    local_310 = 0;
    local_308 = (code *)0x0;
    (*pcVar3)(auStack_2f0);
  }
  if (local_318 != 0) {
    (**(code **)(*(long *)(local_318 + 0x48) + 0x18))();
  }
  local_68 = 0;
  local_70 = 0xffffffff00000002;
  local_64 = 0;
  local_58 = 0;
  local_54 = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x270) + 0xf8) = 3;
  local_60 = 0xffffffff00000001;
  FUN__text__00153ebc(*(undefined8 *)(param_1 + 0x270),&local_70,4);
  lVar6 = *(long *)(param_1 + 0x270);
  local_b0 = CONCAT44(local_b0._4_4_,6);
  local_320 = *(undefined8 *)(*_DAT_008a0228 + 0x10);
  lVar7 = FUN__text__00150170(&local_100,*(undefined8 *)(lVar6 + 8),&local_b0,&local_320);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar6 + 0xf0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0xf0) + 0x48) + 0x18))();
  }
  *(long *)(lVar6 + 0xf0) = lVar7;
  lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x270) + 0xe8) + 0x98) + 0x58);
  puVar8 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar7);
  *(undefined4 *)(puVar8 + 2) = 0;
  *puVar8 = 0xbf800000bf800000;
  puVar8[1] = 0;
  puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x68));
  *(undefined4 *)(puVar8 + 2) = 0;
  *puVar8 = 0xbf8000003f800000;
  puVar8[1] = 0x3f80000000000000;
  puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x68));
  *puVar8 = 0x3f800000bf800000;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 2) = 0x3f800000;
  puVar8 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x68));
  *puVar8 = 0x3f8000003f800000;
  puVar8[1] = 0x3f80000000000000;
  *(undefined4 *)(puVar8 + 2) = 0x3f800000;
  thunk_FUN__text__006ec608(lVar7);
  lVar7 = *(long *)(*(long *)(param_1 + 0x270) + 0xf0) + 0x58;
  puVar8 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar7);
  *puVar8 = 0x2000200010000;
  *(undefined4 *)(puVar8 + 1) = 0x30001;
  thunk_FUN__text__006ec608(lVar7);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN__text__006ebd70(&local_b0);
  uVar12 = local_b0;
  uVar5 = local_b0._4_2_;
  local_b0 = CONCAT71(local_b0._1_7_,7);
  uVar1 = local_b0;
  local_b0._6_2_ = SUB82(uVar12,6);
  local_b0._0_4_ = (undefined4)uVar1;
  local_b0 = CONCAT26(local_b0._6_2_,CONCAT24(uVar5,(undefined4)local_b0)) | 0x700000000;
  uStack_a8._0_5_ = CONCAT23(0xfe05,(undefined3)uStack_a8);
  FUN__text__005bca50(*(undefined8 *)(param_1 + 0x270),&local_b0);
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  FUN__text__006ebd10(&local_d0);
  uVar4 = (undefined1)local_d0;
  uVar13 = local_d0 >> 0x18;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = CONCAT53((uint5)uVar13 & 0xffffffff00,0x70100);
  local_d0 = CONCAT71(local_d0._1_7_,uVar4) | 1;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN__text__006ebd38(&local_100);
  FUN__text__005bcaa0(*(undefined8 *)(param_1 + 0x270),&local_100,&local_d0);
  lVar6 = *(long *)(param_1 + 0x270);
  uVar12 = *(undefined8 *)(param_1 + 0x138);
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  lVar7 = *(long *)(param_1 + 0x150);
  if (lVar7 == 0) {
    *(undefined8 *)(lVar6 + 0x80) = uVar12;
    *(undefined8 *)(lVar6 + 0x88) = uVar2;
    lVar9 = *(long *)(lVar6 + 0x98);
    *(undefined8 *)(lVar6 + 0x90) = uVar1;
    *(undefined8 *)(lVar6 + 0x98) = 0;
  }
  else {
    plVar14 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    *(undefined8 *)(lVar6 + 0x80) = uVar12;
    *(undefined8 *)(lVar6 + 0x88) = uVar2;
    *(undefined8 *)(lVar6 + 0x90) = uVar1;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar9 = *(long *)(lVar6 + 0x98);
    *(long *)(lVar6 + 0x98) = lVar7;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  uVar12 = *(undefined8 *)(param_1 + 0x270);
  local_120 = 0x556483e7a1ceb2;
  uStack_118 = 0x7134a6;
  local_110 = 6;
  local_108 = 0;
  FUN__text__0014953c(&local_320,*(undefined8 *)(param_1 + 600));
  FUN__text__005bc9a0(uVar12,&local_120,&local_320,4);
  FUN__text__0014821c(&local_320);
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x270);
  local_120 = 0xa9467a944c3c2678;
  uStack_118 = 0x7111e8;
  local_110 = 5;
  local_108 = 0;
  FUN__text__0014953c(&local_320,*(undefined8 *)(param_1 + 0x260));
  FUN__text__005bc9a0(uVar12,&local_120,&local_320,4);
  FUN__text__0014821c(&local_320);
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x270);
  local_120 = 0x5a714284d77b0b4;
  uStack_118 = 0x70fc66;
  local_110 = 0xb;
  local_108 = 0;
  FUN__text__005a7908(&local_320,*(undefined8 *)(param_1 + 0x268));
  FUN__text__005bc9a0(uVar12,&local_120,&local_320,4);
  FUN__text__0014821c(&local_320);
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
  }
  lVar7 = param_1 + 0x278;
  uVar13 = (ulong)(7.0 / *(float *)(param_1 + 0x2c8));
  if (uVar13 - 1 == 0) {
    uVar13 = 2;
  }
  else if ((uVar13 & uVar13 - 1) != 0) {
    uVar13 = std::__next_prime(uVar13);
  }
  uVar15 = *(ulong *)(param_1 + 0x280);
  if (uVar13 <= uVar15) {
    if (uVar15 <= uVar13) goto LAB__text__005ef838;
    uVar10 = (ulong)((float)*(ulong *)(param_1 + 0x2c0) / *(float *)(param_1 + 0x2c8));
    if ((uVar15 < 3) ||
       (uVar11 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
       uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333),
       1 < (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar10 = std::__next_prime(uVar10);
      if (uVar13 <= uVar10) {
        uVar13 = uVar10;
      }
    }
    else {
      if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar13 <= uVar10) {
        uVar13 = uVar10;
      }
    }
    if (uVar15 <= uVar13) goto LAB__text__005ef838;
  }
  FUN__text__005f01d0(lVar7,uVar13);
LAB__text__005ef838:
  local_320._0_4_ = 0x41800000;
  FUN__text__005f0480(lVar7,_DAT_008a5bf0,&local_320);
  local_320._0_4_ = 0x42c80000;
  FUN__text__005f0480(lVar7,_DAT_008a5bf8,&local_320);
  local_320 = (ulong)local_320._4_4_ << 0x20;
  FUN__text__005f0480(lVar7,_DAT_008a5c00,&local_320);
  local_320._0_4_ = 0x41a00000;
  FUN__text__005f0480(lVar7,_DAT_008a5c08,&local_320);
  local_320._0_4_ = 0x3dcccccd;
  FUN__text__005f0480(lVar7,_DAT_008a5c10,&local_320);
  local_320._0_4_ = 0x3f000000;
  FUN__text__005f0480(lVar7,_DAT_008a5c18,&local_320);
  local_320 = CONCAT44(local_320._4_4_,0x3f800000);
  FUN__text__005f0480(lVar7,_DAT_008a5c20,&local_320);
  return;
}


