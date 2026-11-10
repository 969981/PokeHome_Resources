/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00595FA8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00695fa8; name: FUN_.text__00695fa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00695fa8(undefined8 param_1,long param_2,long *param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined2 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar5 = (undefined8 *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_80 = puVar5[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = puVar5[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_68 = puVar5[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = puVar5[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0 = (long *)puVar5[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_98 = puVar5[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b0 = puVar5[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_c0 = puVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b8 = puVar5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_c8 = *puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a8 = puVar5[4] & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  _local_78 = CONCAT44((int)((ulong)puVar5[10] >> 0x20),0x300); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(ushort *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(ushort *)(param_2 + 10) >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006940a0(&local_c8); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar8 = (float)FUN__text__0068a918(*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar3 = (**(code **)(*local_a0 + 0x20))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(undefined8 *)(*param_3 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (fVar8 * 0.4) / (float)iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_c0 = CONCAT44(fVar8,(undefined4)uStack_c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b8._0_4_ = fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0068e568(&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_38 = _DAT_008a66b8 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(*param_3 + 0x58) = &local_38;
  fVar8 = (float)FUN__text__006940c0(*param_3,param_5,uVar1 >> 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(*param_3 + 0x58) = uVar7;
  fVar9 = (float)FUN__text__006940c0(&local_c8,param_2 + 0xc,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0068e57c(&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  fVar8 = fVar8 - fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar8 <= 0.0) { // [自动静态注释] 条件判断/分支
    fVar8 = fVar8 * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = *(float *)(lVar6 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar8 = fVar8 / (float)(ushort)(uVar2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_88 = CONCAT44(local_88._4_4_,fVar8 + 0.0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = *(float *)(lVar6 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_b8._4_4_ = fVar8 + local_b8._4_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar9 != 0.0) { // [自动静态注释] 条件判断/分支
    fVar8 = *(float *)(lVar6 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = (**(code **)(**(long **)(lVar6 + 0x28) + 0x20))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_b8._4_4_ = local_b8._4_4_ + fVar9 * fVar8 * (float)iVar3 * 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((*(byte *)(param_3 + 5) & 1) == 0) { // [自动静态注释] 条件判断/分支
    local_b8._4_4_ = *(float *)(lVar6 + 0x40) + local_b8._4_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar8 = *(float *)(lVar6 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = (**(code **)(**(long **)(lVar6 + 0x28) + 200))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = *(long **)(*param_3 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b0 = CONCAT44(local_b0._4_4_,(float)local_b0 - fVar8 * (float)iVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    iVar3 = (**(code **)(*plVar4 + 0xb8))(plVar4,*(undefined4 *)((long)param_3 + 0x2c),*param_5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = *(float *)(*param_3 + 0xc) * (float)iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar8 != 0.0) { // [自动静态注释] 条件判断/分支
      local_b8._4_4_ = fVar8 + local_b8._4_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00694a7c(&local_c8,param_2 + 0xc,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  thunk_FUN__text__0068a8b4(&local_c8); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


