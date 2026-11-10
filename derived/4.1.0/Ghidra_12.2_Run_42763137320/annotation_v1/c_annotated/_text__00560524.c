/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00460524
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00560524; name: FUN_.text__00560524
 */


bool FUN__text__00560524(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(uint *)(param_1 + 0x28) < 4) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x20) =
         *(undefined8 *)((long)(int)*(uint *)(param_1 + 0x28) * 8 + 0x892648);
  } // [自动静态注释] 作用域/控制流边界
  if (*(uint *)(param_1 + 0x68) < 4) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x60) =
         *(undefined8 *)((long)(int)*(uint *)(param_1 + 0x68) * 8 + 0x892648);
    bVar1 = *(long *)(param_1 + 0x20) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (!bVar1) { // [自动静态注释] 条件判断/分支
      return bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar2 = *(long *)(param_1 + 0x60) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = *(long *)(param_1 + 0x20) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = bVar3 && bVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (!bVar3 || !bVar2) { // [自动静态注释] 条件判断/分支
      return bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00560e80(param_1,param_2,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005614c0(param_1,param_2,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  return bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


