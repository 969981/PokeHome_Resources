/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000941B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001941b8; name: FUN_.text__001941b8
 */


undefined8 FUN__text__001941b8(long param_1,undefined8 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__00195358(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(lVar1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(ulong *)(lVar1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar2 & 0xffffffff) * 0x20 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                         0x10) + 0x10) + 8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      uVar5 = *(undefined8 *)(lVar1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = (long *)(lVar3 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar4 + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00303bec(lVar3,uVar2 >> 0x20,(int)uVar5 + (int)((ulong)uVar5 >> 0x20) * 6,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar4 + 0x18))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


