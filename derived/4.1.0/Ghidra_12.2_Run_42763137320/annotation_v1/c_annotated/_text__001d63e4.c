/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000D63E4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d63e4; name: FUN_.text__001d63e4
 */


void FUN__text__001d63e4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x18,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  FUN__text__001aab88(uVar1,plVar2,param_1 + 0x110); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  puVar4 = *(undefined8 **)(param_1 + 0x650); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x650) = uVar1;
  if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)*puVar4)(puVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(**(long **)(param_1 + 0x658) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x658),puVar4,*(undefined8 *)(param_1 + 0x660), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x668));
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_1 + 0x658) = plVar2;
  *(undefined8 *)(param_1 + 0x660) = 0x18;
  *(undefined8 *)(param_1 + 0x668) = 8;
  FUN__text__001d64dc(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128db0(param_1,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00128ca0(param_1,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


