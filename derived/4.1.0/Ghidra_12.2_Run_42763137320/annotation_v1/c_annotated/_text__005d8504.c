/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D8504
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d8504; name: FUN_.text__005d8504
 */


undefined8 FUN__text__005d8504(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_28 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 100) = 4;
  lVar2 = *(long *)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0 && *(long *)(param_1 + 0x68) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 100) = 0;
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x60) == '\0') { // [自动静态注释] 条件判断/分支
    return 4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(*(long *)(param_1 + 0x100) + lVar2 * 8 + -8) + 0x60))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = *(long *)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x100) + lVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == *(long *)(param_1 + 0x110)) { // [自动静态注释] 条件判断/分支
    FUN__text__005d8830(auStack_28,param_1 + 0xc0,puVar1,1,(long *)(param_1 + 0x68)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xc0);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    uVar5 = *(undefined8 *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x68) = 0;
    *puVar1 = uVar5;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 3;
  return 3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


