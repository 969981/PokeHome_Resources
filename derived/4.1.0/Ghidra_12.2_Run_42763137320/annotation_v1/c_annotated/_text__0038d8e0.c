/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0028D8E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038d8e0; name: FUN_.text__0038d8e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0038d8e0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_50 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_0089f518; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *_DAT_0089f518; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(auStack_50,_DAT_008a3150); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = FUN__text__0039b7d0(uVar6,auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_18 = param_1 + 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0x8130; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar2 = FUN__text__00391400(lVar4,0x7379cc,&local_18,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0x50))(plVar5,0x7379cc); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(auStack_50,_DAT_008a3150); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = FUN__text__0039b7d0(uVar6,auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__00388580(lVar4,0x7379d0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar3 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0x50))(plVar5,0x7379d0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(bool *)(param_1 + 0x8190) = 0xff < uVar3;
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


