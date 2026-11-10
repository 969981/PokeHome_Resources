/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E3FF8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e3ff8; name: FUN_.text__005e3ff8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__005e3ff8(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar3 = *(long **)(*_DAT_0089f7d0 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0x160,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = uVar5 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar5 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  FUN__text__005e36dc(lVar2,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar1 = _DAT_008a5b10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *_DAT_008a5b10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  *plVar1 = lVar2;
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005e3c7c(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*(long *)plVar1[1] + 0x18))((long *)plVar1[1],lVar4,plVar1[2],plVar1[3]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar1[1] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[2] = 0x160; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1[3] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


