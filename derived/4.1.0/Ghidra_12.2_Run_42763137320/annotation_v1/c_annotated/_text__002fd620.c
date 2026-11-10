/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001FD620
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd620; name: FUN_.text__002fd620
 */


void FUN__text__002fd620(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *pvVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = param_1[1] - lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = lVar2 >> 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((ulong)(param_1[2] - lVar3 >> 0xc) <= uVar4) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[1] == lVar3) { // [自动静态注释] 条件判断/分支
LAB__text__002fd73c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pvVar1 = (void *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pvVar5 = (void *)(uVar4 << 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pvVar6 = (void *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __src = (void *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (__src == pvVar6) { // [自动静态注释] 条件判断/分支
LAB__text__002fd750: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar2 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = (long)pvVar5;
      param_1[1] = (long)pvVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[2] = (long)pvVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x002fd760; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pvVar1 = (void *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar2,0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pvVar1 == (void *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      goto LAB__text__002fd73c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    pvVar5 = (void *)((long)pvVar1 + uVar4 * 0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pvVar6 = (void *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __src = (void *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (__src == pvVar6) goto LAB__text__002fd750; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *(long *)(uVar4 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __dest = pvVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (lVar2 == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(pvVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    __src = (void *)((long)__src + -0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __dest = (void *)((long)__dest + -0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)((uVar4 | 0x18) + lVar2 * 8) = param_1[3];
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    pvVar1 = memcpy(__dest,__src,0x1000); // [自动静态注释] 内存复制、清零或移动
    lVar2 = *(long *)(uVar4 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar4 + 0x98) = lVar2;
  } while (__src != pvVar6); // [自动静态注释] 循环/迭代
  __src = (void *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = (long)__dest;
  param_1[1] = (long)pvVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = (long)pvVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x002fd760: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (__src == (void *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x002fd728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__src,lVar2 - (long)__src,0x1000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


