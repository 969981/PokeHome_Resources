/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B6410
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b6410; name: FUN_.text__003b6410
 */


void FUN__text__003b6410(long *param_1,undefined8 *param_2,void *param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_4 - uVar7) + param_2[9] <= uVar5 - uVar7) { // [自动静态注释] 条件判断/分支
    uVar1 = param_2[9] + param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = uVar7 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (4 < uVar7 >> 0x3d) { // [自动静态注释] 条件判断/分支
      uVar2 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar7 >> 0x3d == 0) { // [自动静态注释] 条件判断/分支
      uVar2 = (uVar7 << 3) / 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar5 <= uVar2) { // [自动静态注释] 条件判断/分支
      uVar2 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar1 <= uVar2) { // [自动静态注释] 条件判断/分支
      uVar1 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar1 <= uVar5) { // [自动静态注释] 条件判断/分支
      lVar8 = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __dest = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 << 4,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __src = (void *)param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = param_2[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = __dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((__src != (void *)0x0) && (__dest != (undefined8 *)0x0)) && (__src != param_3)) { // [自动静态注释] 条件判断/分支
        memmove(__dest,__src,(long)param_3 - (long)__src); // [自动静态注释] 内存复制、清零或移动
        puVar6 = (undefined8 *)((long)__dest + ((long)param_3 - (long)__src)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar7 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *param_2;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      uVar4 = param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar6 = *param_5;
      puVar6[1] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      if (((param_3 != (void *)0x0) && // [自动静态注释] 条件判断/分支
          (__n = (long)__src + (lVar3 * 0x10 - (long)param_3), __n != 0)) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
         (puVar6 != (undefined8 *)0x0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        memmove(puVar6 + param_4 * 2,param_3,__n); // [自动静态注释] 内存复制、清零或移动
      } // [自动静态注释] 作用域/控制流边界
      if (__src != (void *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] << 4,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      param_2[10] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2[8] = __dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2[9] = param_2[9] + param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = (long)__dest + ((long)param_3 - lVar8);
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  abort(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


