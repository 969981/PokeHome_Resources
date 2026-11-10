/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00485D90
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00585d90; name: FUN_.text__00585d90
 */


undefined8 FUN__text__00585d90(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(uint *)(param_1 + 0x10) = param_2;
  lVar2 = FUN__text__00400f90(5,-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4 // [自动静态注释] 调用尚未恢复正式名称的函数
                              ,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(long *)(param_1 + 0x20) = lVar2;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    *(long *)(param_1 + 0x28) = lVar2 + (long)(int)param_2 * 8;
    FUN__text__00587340(); // [自动静态注释] 调用尚未恢复正式名称的函数
    **(undefined8 **)(param_1 + 0x20) = 0;
    **(undefined8 **)(param_1 + 0x28) = 0;
    uVar3 = (long)*(int *)(param_1 + 0x10) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            (long)(int)(*(uint *)(*(long *)(param_1 + 0x18) + 4) & 0xfffffffc) + 0xf; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = uVar3 & 0xfffffffffffffff0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    __s = (void *)FUN__text__00400f90(5,uVar6,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    **(undefined8 **)(param_1 + 0x28) = __s;
    if (__s != (void *)0x0) { // [自动静态注释] 条件判断/分支
      memset(__s,0,uVar3 & 0xfffffff0); // [自动静态注释] 内存复制、清零或移动
      *(undefined1 *)(param_1 + 0x48) = 1;
      if (0 < (int)param_2) { // [自动静态注释] 条件判断/分支
        iVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (param_2 != 0) { // [自动静态注释] 条件判断/分支
          iVar1 = (int)uVar6 / (int)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar3 = (ulong)param_2 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = (long)iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (param_2 < 4) { // [自动静态注释] 条件判断/分支
          uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            lVar5 = uVar6 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar6 = uVar6 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(void **)(*(long *)(param_1 + 0x28) + lVar5) = __s;
            *(long *)(*(long *)(param_1 + 0x28) + lVar5 + 8) = (long)__s + lVar2;
            lVar4 = (long)__s + lVar2 + lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(long *)(*(long *)(param_1 + 0x28) + lVar5 + 0x10) = lVar4;
            lVar4 = lVar4 + lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            __s = (void *)(lVar4 + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(long *)(*(long *)(param_1 + 0x28) + lVar5 + 0x18) = lVar4;
          } while (((ulong)param_2 & 0xfffffffc) != uVar6); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        if ((param_2 & 3) != 0) { // [自动静态注释] 条件判断/分支
          lVar4 = uVar6 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            uVar3 = uVar3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(void **)(*(long *)(param_1 + 0x28) + lVar4) = __s;
            __s = (void *)((long)__s + lVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar4 = lVar4 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (uVar3 != 0); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


