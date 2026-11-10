/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D1F68
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d1f68; name: FUN_.text__003d1f68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d1f68(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s_00; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = *(long **)(*_DAT_0089f3d8 + 0x288); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __n = nn::util::GetGzipDecompressedSize // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  (*(void **)(param_1[0x27] + 400),*(ulong *)(param_1[0x27] + 0x180)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  __s = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,__n,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    *(long **)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = plVar2;
    lVar1 = *(long *)(uVar3 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar3 + 0x98) = lVar1 + 1;
    if (__n != 0) { // [自动静态注释] 条件判断/分支
      memset(__s,0,__n); // [自动静态注释] 内存复制、清零或移动
      lVar1 = *(long *)(uVar3 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(uVar3 + 0x98) = lVar1;
    __s_00 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,0x1bf8,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar3 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
      *(long **)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = plVar2;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      memset(__s_00,0,0x1bf8); // [自动静态注释] 内存复制、清零或移动
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
      uVar3 = nn::util::DecompressGzip // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (__s,__n,*(void **)(param_1[0x27] + 400),*(ulong *)(param_1[0x27] + 0x180), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         __s_00,0x1bf8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__005d619c(param_1 + 0x48,*param_1,__s,__n); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar2 + 0x18))(plVar2,__s_00,0x1bf8,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (__s == (void *)0x0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x003d20e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,__s,__n,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


