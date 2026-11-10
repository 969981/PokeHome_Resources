/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C9DB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c9db0; name: FUN_.text__006c9db0
 */


void FUN__text__006c9db0(undefined8 *param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[2] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(param_3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != param_3) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      lVar2 = *(long *)(lVar2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar2 != param_3); // [自动静态注释] 循环/迭代
    lVar2 = FUN__text__006a0f04(0x38); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0069e328(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    param_1[1] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    for (lVar2 = *(long *)(param_3 + 8); lVar2 != param_3; lVar2 = *(long *)(lVar2 + 8)) { // [自动静态注释] 循环/迭代
      uVar1 = (**(code **)(**(long **)(param_2 + 0x18) + 0x78)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (*(long **)(param_2 + 0x18),*(undefined8 *)(lVar2 + 0x10),1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0069e434(param_1[1],uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = (**(code **)*param_1)(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[4] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


