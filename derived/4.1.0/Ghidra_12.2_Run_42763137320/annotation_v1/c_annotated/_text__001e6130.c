/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000E6130
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e6130; name: FUN_.text__001e6130
 */


void FUN__text__001e6130(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = (long *)(**(code **)*puVar4)(puVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)FUN__text__0012615c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar2 != plVar1) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar1 = (long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  local_50 = 0x6741161af454b321; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0x715c42; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__0018ebb0(puVar4[0xaf],&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001dc520(*(undefined8 *)(lVar3 + 0x6d0),param_1 + 0xbc); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


