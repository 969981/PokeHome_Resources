/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B7B30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b7b30; name: FUN_.text__006b7b30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b7b30(long param_1,long param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(&local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar10 = (float)NEON_ucvtf((uint)(ushort)local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(&local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = local_70._2_2_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = fVar10 * -0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (ulong *)(*(long *)(*(long *)(param_2 + 200) + 0x38) + (long)param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_34 = (float)NEON_ucvtf((uint)uVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fStack_3c = local_34 * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ad654(&local_70,*(long *)(param_1 + 8) + 0x18,param_1 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(byte *)(*(long *)(param_1 + 8) + 4) & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(puVar1 + 0x12) = (undefined4)local_70;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined4 *)((long)puVar1 + 0x94) = local_70._4_4_;
    *(undefined4 *)((long)puVar1 + 0x9c) = (undefined4)uStack_68;
    *(undefined4 *)(puVar1 + 0x14) = uStack_68._4_4_;
    *(undefined4 *)(puVar1 + 0x15) = 0;
    *(undefined4 *)((long)puVar1 + 0xa4) = (undefined4)local_60;
    *(undefined4 *)((long)puVar1 + 0xac) = local_60._4_4_;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(puVar1 + 0xe) = (undefined4)local_70;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)((long)puVar1 + 0x74) = local_70._4_4_;
    *(undefined4 *)((long)puVar1 + 0x7c) = (undefined4)uStack_68;
    *(undefined4 *)(puVar1 + 0x10) = uStack_68._4_4_;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    *(undefined4 *)((long)puVar1 + 0x84) = (undefined4)local_60;
    *(undefined4 *)((long)puVar1 + 0x8c) = local_60._4_4_;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0069d960(param_2,puVar1,&local_40,&local_38,1,0x76636c); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = fStack_3c + (fStack_3c - local_34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = local_40 + local_40 + local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = 1.0 / ((local_40 + local_38) - local_40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = 1.0 / ((fStack_3c - local_34) - fStack_3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006c1910(&local_70,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = uRam0000000000724ae8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = _DAT_00724ae0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uRam0000000000724938; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = _DAT_00724930; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[1] = (ulong)(uint)-(fVar10 * fVar8) << 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar1 = (ulong)(uint)(fVar8 + fVar8);
  puVar1[3] = (ulong)(uint)-(fVar7 * fVar9) << 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[2] = (ulong)(uint)(fVar9 + fVar9) << 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[5] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[4] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[7] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[6] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0xd] = uStack_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0xc] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[9] = uStack_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[8] = local_70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[0xb] = uStack_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[10] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


