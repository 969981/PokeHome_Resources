/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F3104
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3104; name: FUN_.text__005f3104
 */


void FUN__text__005f3104(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined1 *)(param_1 + 0x7c) = 0;
  plVar3 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_2 + 0x7a);
  uVar1 = *(ushort *)(param_2 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)(param_1 + 0x78) = uVar1;
  __n = (ulong)uVar1 << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,__n,2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar3;
  lVar2 = *(long *)(uVar4 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar4 + 0x98) = lVar2 + 1;
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    memset(__s,0,__n); // [自动静态注释] 内存复制、清零或移动
    lVar2 = *(long *)(uVar4 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(uVar4 + 0x98) = lVar2;
  lVar2 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(void **)(param_1 + 0x58) = __s;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x60),lVar2,*(undefined8 *)(param_1 + 0x68), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x70));
    __s = *(void **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_1 + 0x60) = plVar3;
  *(size_t *)(param_1 + 0x68) = __n;
  *(undefined8 *)(param_1 + 0x70) = 2;
  if (__s != (void *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__005f3460(__s,*(undefined8 *)(param_2 + 0x58),*(undefined2 *)(param_1 + 0x78)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(param_1 + 0x7c) = 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


