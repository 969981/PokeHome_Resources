/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004BDEA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bdea0; name: FUN_.text__005bdea0
 */


ulong FUN__text__005bdea0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_250 [512]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = *(ulong *)(param_1 + 0x7f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = *(long *)(param_1 + 0x7e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uVar3 - lVar1 >> 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar2 != 0) { // [自动静态注释] 条件判断/分支
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = 0x160; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if ((*(long *)(lVar1 + lVar5 + -0x118) == 0 && *(long *)(lVar1 + lVar5 + -8) == 0) && // [自动静态注释] 条件判断/分支
         (*(long *)(lVar1 + lVar5) == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__005d4c20(auStack_250); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__0014d25c(*(long *)(param_1 + 0x7e8) + lVar5 + -0x160,auStack_250); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__0014821c(auStack_250); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar2 = uVar4 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__005bdfac; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((uVar3 - lVar1 >> 9 & 0xffffffff) != uVar4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (uVar3 < *(ulong *)(param_1 + 0x7f8)) { // [自动静态注释] 条件判断/分支
    uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x800);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    FUN__text__005d4c20(uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(ulong *)(param_1 + 0x7f0) = uVar3 + 0x200;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005c2be0((long *)(param_1 + 0x7e8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005bdfac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return uVar2 & 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


