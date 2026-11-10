/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005834EC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006834ec; name: FUN_.text__006834ec
 */


undefined8 FUN__text__006834ec(long param_1,long param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    while( true ) { // [自动静态注释] 循环/迭代
      lVar3 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_3 <= uVar2) { // [自动静态注释] 条件判断/分支
        uVar2 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (uVar2 != 0) break; // [自动静态注释] 条件判断/分支
      uVar1 = FUN__text__00683578(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((int)uVar1 != 0) { // [自动静态注释] 条件判断/分支
        return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = FUN__text__00679e18(*(long *)(lVar3 + 0x20),param_2,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_2 = param_2 + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_3 = param_3 - uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar3 + 0x20) = uVar1;
  } while (param_3 != 0); // [自动静态注释] 循环/迭代
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


