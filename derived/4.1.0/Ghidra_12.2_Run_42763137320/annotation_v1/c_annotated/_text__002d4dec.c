/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D4DEC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d4dec; name: FUN_.text__002d4dec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d4dec(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_40 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = *_DAT_008a2580; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(auStack_40,_DAT_008a2688); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = FUN__text__002f95a0(uVar4,auStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = 0x27068; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar1 = FUN__text__002d50f0(lVar2,0x733910,param_1 + 0x60,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar3 + 0x50))(plVar3,0x733910); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


