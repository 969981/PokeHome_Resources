/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00115E18
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215e18; name: FUN_.text__00215e18
 */


uint FUN__text__00215e18(uint *param_1,long *param_2,void *param_3,uint param_4,uint param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined1 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __n = (size_t)param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00215d0c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_4 == 0) { // [自动静态注释] 条件判断/分支
    __n = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_1 = param_4;
    __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,__n,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    memset(__s,0,__n); // [自动静态注释] 内存复制、清零或移动
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    lVar3 = *(long *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(void **)(param_1 + 2) = __s;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(param_1 + 4) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 4),lVar3,*(undefined8 *)(param_1 + 6), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 8));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(param_1 + 4) = param_2;
    *(size_t *)(param_1 + 6) = __n;
    param_1[8] = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  memcpy(*(void **)(param_1 + 2),param_3,__n); // [自动静态注释] 内存复制、清零或移动
  param_1[10] = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0xb) = param_6;
  uVar1 = FUN__text__005f53d0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f54f0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00215fe0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005f54f0(uVar1 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar2 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


