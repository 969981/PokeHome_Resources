/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E2734
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e2734; name: FUN_.text__005e2734
 */


void FUN__text__005e2734(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*(byte *)(param_1 + 0x130) & 1) != 0) && (*(int *)(param_1 + 0x138) == 0)) { // [自动静态注释] 条件判断/分支
    lVar1 = (*(code *)**(undefined8 **)*param_2) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x268)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(lVar1 + 8) != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__005e7d30(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__005e49f0(*(undefined8 *)(param_1 + 0x150),param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e7dd0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


