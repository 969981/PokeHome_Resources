/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001DC27C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dc27c; name: FUN_.text__002dc27c
 */


undefined8 FUN__text__002dc27c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x18) + (*(ulong *)(param_1 + 0x80) / 0x19) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(ulong *)(param_1 + 0x80) % 0x19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = (long *)(lVar6 + uVar7 * 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*plVar5 != 0x1612e1b1014aab70) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__002f0b64(); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__002fa0a4(uVar2,plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = FUN__text__002fa114(uVar2,plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__002fa184(uVar2,plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 8) = 0;
    lVar6 = lVar6 + uVar7 * 0xa0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar4 = *(code **)(lVar6 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar4 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      local_34 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*pcVar4)(lVar6 + 0x40,&local_34); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__002de070(param_1 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


