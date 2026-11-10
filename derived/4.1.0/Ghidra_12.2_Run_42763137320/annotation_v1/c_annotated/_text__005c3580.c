/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004C3580
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c3580; name: FUN_.text__005c3580
 */


void FUN__text__005c3580(undefined8 *param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *param_1;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar5 = *(long *)(param_3 + 0x600); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_2 + 0x600) = lVar5;
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar5 = lVar5 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005a6738(lVar3,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar2 = lVar2 + 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar3 + 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar5 != 0); // [自动静态注释] 循环/迭代
    lVar5 = *(long *)(param_2 + 0x600); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
      lVar2 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar5 = lVar5 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__0014821c(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar2 = lVar2 + 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar5 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(undefined8 *)(param_3 + 0x610); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_3 + 0x600) = 0;
  *(undefined8 *)(param_3 + 0x610) = 0;
  *(undefined8 *)(param_2 + 0x610) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x618); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_3 + 0x618) = 0;
  *(undefined8 *)(param_2 + 0x618) = uVar1;
  *(undefined4 *)(param_2 + 0x620) = *(undefined4 *)(param_3 + 0x620);
  uVar1 = *(undefined8 *)(param_3 + 0x628); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_3 + 0x628) = 0;
  *(undefined8 *)(param_2 + 0x628) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x630); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_3 + 0x630) = 0;
  *(undefined8 *)(param_2 + 0x630) = uVar1;
  memcpy((void *)(param_2 + 0x638),(void *)(param_3 + 0x638),0xa4); // [自动静态注释] 内存复制、清零或移动
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


