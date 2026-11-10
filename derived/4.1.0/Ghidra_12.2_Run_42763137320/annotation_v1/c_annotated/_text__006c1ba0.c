/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C1BA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1ba0; name: FUN_.text__006c1ba0
 */


void FUN__text__006c1ba0(float param_1,float param_2,float *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar5 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1 <= fVar5) { // [自动静态注释] 条件判断/分支
    fVar4 = fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar2 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1 <= fVar5) { // [自动静态注释] 条件判断/分支
    bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (!NAN(fVar4) && !NAN(param_2)) { // [自动静态注释] 条件判断/分支
      bVar1 = fVar4 < param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = fVar4 == param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar3 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (!bVar2 && bVar1 == bVar3) { // [自动静态注释] 条件判断/分支
    if (fVar4 <= param_2) { // [自动静态注释] 条件判断/分支
      param_2 = fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *param_3 = param_2;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


