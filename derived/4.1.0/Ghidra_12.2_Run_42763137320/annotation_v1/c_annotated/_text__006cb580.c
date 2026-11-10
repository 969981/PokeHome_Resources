/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005CB580
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cb580; name: FUN_.text__006cb580
 */


void FUN__text__006cb580(float param_1,float param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = (**(code **)(*param_3 + 0x70))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
    fVar2 = 1.0 - param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2 = 1.0 - param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_3 + 1) = fVar2;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(float *)(param_3 + 1) = param_1;
  } // [自动静态注释] 作用域/控制流边界
  *(float *)((long)param_3 + 0xc) = param_2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


