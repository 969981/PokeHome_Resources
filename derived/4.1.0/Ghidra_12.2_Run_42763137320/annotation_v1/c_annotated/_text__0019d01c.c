/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009D01C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019d01c; name: FUN_.text__0019d01c
 */


void FUN__text__0019d01c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar3 == 0) || (lVar5 = *(long *)(param_1 + 0x18), lVar5 == 0)) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = *(long **)(lVar6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x288,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar7 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  puVar1[2] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[3] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar1 = 0x86d9a8;
  puVar1[1] = lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(puVar1 + 4,0,0x267); // [自动静态注释] 内存复制、清零或移动
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  puVar4 = *(undefined8 **)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)*puVar4)(puVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x30),puVar4,*(undefined8 *)(param_1 + 0x38), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x40));
    puVar1 = *(undefined8 **)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_1 + 0x30) = plVar2;
  *(undefined8 *)(param_1 + 0x38) = 0x288;
  *(undefined8 *)(param_1 + 0x40) = 8;
  FUN__text__001a2f40(puVar1,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


