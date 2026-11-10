/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004311FC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005311fc; name: FUN_.text__005311fc
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__005311fc(double param_1,double param_2,double param_3,long param_4,double *param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(uint *)(param_4 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = param_4 + (ulong)(uVar1 - 1) * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (float)(param_2 - param_5[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = (float)(param_1 - *param_5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = (float)(param_3 - param_5[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = (float)(*(double *)(lVar2 + 0x10) - param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = (float)(*(double *)(lVar2 + 8) - param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = (float)(*(double *)(lVar2 + 0x18) - param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = SQRT((fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                (fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (0.001 < fVar10) { // [自动静态注释] 条件判断/分支
    fVar3 = (float)NEON_fminnm((fVar7 * fVar3 + fVar4 * fVar8 + fVar5 * fVar9) / fVar10,0x3f800000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar3 <= -1.0) { // [自动静态注释] 条件判断/分支
      fVar3 = -1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar3 = acosf(fVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = fVar3 * 0.31830987; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0.002 < fVar3) { // [自动静态注释] 条件判断/分支
      fVar4 = *(float *)(param_4 + 0x128) + fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = NEON_fminnm(fVar4,0x3f800000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(param_4 + 0x128) = uVar6;
      if (7 < uVar1) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (1.0 <= fVar4) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(float *)(param_4 + (ulong)uVar1 * 4 + 0x108) = fVar3;
      lVar2 = param_4 + (ulong)*(uint *)(param_4 + 0x130) * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(double *)(lVar2 + 0x18) = param_3;
      *(double *)(lVar2 + 8) = param_1;
      *(double *)(lVar2 + 0x10) = param_2;
      *(int *)(param_4 + 0x130) = *(int *)(param_4 + 0x130) + 1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


