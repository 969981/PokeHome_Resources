/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b7b30; name: FUN_.text__006b7b30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b7b30(long param_1,long param_2,int param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(&local_70);
  fVar10 = (float)NEON_ucvtf((uint)(ushort)local_70);
  local_38 = fVar10;
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(&local_70);
  uVar6 = local_70._2_2_;
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  local_40 = fVar10 * -0.5;
  puVar1 = (ulong *)(*(long *)(*(long *)(param_2 + 200) + 0x38) + (long)param_3);
  local_34 = (float)NEON_ucvtf((uint)uVar6);
  fStack_3c = local_34 * 0.5;
  FUN__text__006ad654(&local_70,*(long *)(param_1 + 8) + 0x18,param_1 + 0x10);
  if ((*(byte *)(*(long *)(param_1 + 8) + 4) & 1) == 0) {
    *(undefined4 *)(puVar1 + 0x12) = (undefined4)local_70;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined4 *)((long)puVar1 + 0x94) = local_70._4_4_;
    *(undefined4 *)((long)puVar1 + 0x9c) = (undefined4)uStack_68;
    *(undefined4 *)(puVar1 + 0x14) = uStack_68._4_4_;
    *(undefined4 *)(puVar1 + 0x15) = 0;
    *(undefined4 *)((long)puVar1 + 0xa4) = (undefined4)local_60;
    *(undefined4 *)((long)puVar1 + 0xac) = local_60._4_4_;
  }
  else {
    *(undefined4 *)(puVar1 + 0xe) = (undefined4)local_70;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)((long)puVar1 + 0x74) = local_70._4_4_;
    *(undefined4 *)((long)puVar1 + 0x7c) = (undefined4)uStack_68;
    *(undefined4 *)(puVar1 + 0x10) = uStack_68._4_4_;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    *(undefined4 *)((long)puVar1 + 0x84) = (undefined4)local_60;
    *(undefined4 *)((long)puVar1 + 0x8c) = local_60._4_4_;
  }
  FUN__text__0069d960(param_2,puVar1,&local_40,&local_38,1,0x76636c);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  fVar7 = fStack_3c + (fStack_3c - local_34);
  fVar10 = local_40 + local_40 + local_38;
  fVar8 = 1.0 / ((local_40 + local_38) - local_40);
  fVar9 = 1.0 / ((fStack_3c - local_34) - fStack_3c);
  FUN__text__006c1910(&local_70,param_2);
  uVar5 = uRam0000000000724ae8;
  uVar4 = _DAT_00724ae0;
  uVar3 = uRam0000000000724938;
  uVar2 = _DAT_00724930;
  puVar1[1] = (ulong)(uint)-(fVar10 * fVar8) << 0x20;
  *puVar1 = (ulong)(uint)(fVar8 + fVar8);
  puVar1[3] = (ulong)(uint)-(fVar7 * fVar9) << 0x20;
  puVar1[2] = (ulong)(uint)(fVar9 + fVar9) << 0x20;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  puVar1[0xd] = uStack_48;
  puVar1[0xc] = local_50;
  puVar1[9] = uStack_68;
  puVar1[8] = local_70;
  puVar1[0xb] = uStack_58;
  puVar1[10] = local_60;
  return;
}


