/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0027FAFC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037fafc; name: FUN_.text__0037fafc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037fafc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_0089f518; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *_DAT_0089f518; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(local_50,_DAT_008a3150); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = FUN__text__0039b7d0(uVar5,local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_58 = CONCAT44(local_58._4_4_,0x21c9bd44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50[0] = param_1 + 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar2 = FUN__text__00380490(lVar3,&local_58,local_50,0x735480); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_58); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(local_50,_DAT_008a3150); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = FUN__text__0039b7d0(uVar5,local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_14 = 0x916bca9e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50[0] = param_1 + 0xbbe0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0x158; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar2 = FUN__text__00380df0(lVar3,&local_14,local_50,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


