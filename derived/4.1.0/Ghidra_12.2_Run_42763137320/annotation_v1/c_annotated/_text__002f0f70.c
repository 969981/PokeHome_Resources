/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001F0F70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f0f70; name: FUN_.text__002f0f70
 */


void FUN__text__002f0f70(uint *param_1,uint *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (DAT_008e5278 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = *(undefined8 **)(DAT_008e5278 + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = *(undefined8 **)(DAT_008e5278 + 0x1f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while( true ) { // [自动静态注释] 循环/迭代
    if (puVar1 == puVar2) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    plVar5 = (long *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)(**(code **)plVar5[10])(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = (long *)FUN__text__002e29c4(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar4 == plVar3) break; // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar3 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0); // [自动静态注释] 循环/迭代
    if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      if (plVar5 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    puVar1 = puVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  dVar6 = (double)(**(code **)(*plVar5 + 0x90))(plVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar7 = 3599999.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (dVar6 < 3599999.0) { // [自动静态注释] 条件判断/分支
    dVar7 = dVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = (uint)(int)dVar7 / 0xe10;
  *param_2 = ((uint)(int)dVar7 % 0xe10) / 0x3c;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


