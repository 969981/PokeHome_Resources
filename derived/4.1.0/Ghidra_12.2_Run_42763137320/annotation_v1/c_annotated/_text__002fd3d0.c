/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001FD3D0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd3d0; name: FUN_.text__002fd3d0
 */


void FUN__text__002fd3d0(long *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *pvVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pvVar8 = (void *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 <= (ulong)(param_1[2] - (long)pvVar8 >> 0xc)) { // [自动静态注释] 条件判断/分支
    pvVar7 = pvVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 != 0) { // [自动静态注释] 条件判断/分支
      uVar9 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pvVar7 = (void *)((long)pvVar8 + param_2 * 0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = param_2 << 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = uVar9 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = *(long *)(uVar9 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (lVar2 == 0x10) goto LAB__text__002fd5f4; // [自动静态注释] 条件判断/分支
        *(long *)((uVar9 | 0x18) + lVar2 * 8) = param_1[3];
        *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
        memset(pvVar8,0,0x1000); // [自动静态注释] 内存复制、清零或移动
        pvVar8 = (void *)((long)pvVar8 + 0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar6 = lVar6 + -0x1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(uVar9 + 0x98) = lVar2;
      } while (lVar6 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    param_1[1] = (long)pvVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = (long)pvVar8 - *param_1 >> 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = lVar6 + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar9 >> 0x34 != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__002fd600(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (long)uVar3 >> 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 <= uVar9) { // [自动静态注释] 条件判断/分支
    uVar5 = uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7fffffffffffefff < uVar3) { // [自动静态注释] 条件判断/分支
    uVar5 = 0xfffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar5 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 0xc,0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) goto LAB__text__002fd46c; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__002fd46c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar9 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar7 = (void *)(lVar2 + lVar6 * 0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = param_2 * 0x1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = uVar9 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(uVar9 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar1 = (void *)((long)pvVar7 + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar8 = pvVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (lVar4 == 0x10) goto LAB__text__002fd5f4; // [自动静态注释] 条件判断/分支
    *(long *)((uVar9 | 0x18) + lVar4 * 8) = param_1[3];
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    memset(pvVar8,0,0x1000); // [自动静态注释] 内存复制、清零或移动
    pvVar8 = (void *)((long)pvVar8 + 0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = lVar6 + -0x1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar9 + 0x98) = lVar4;
  } while (lVar6 != 0); // [自动静态注释] 循环/迭代
  pvVar8 = (void *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __src = (void *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__src != pvVar8) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (lVar4 == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__002fd5f4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      __src = (void *)((long)__src + -0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pvVar7 = (void *)((long)pvVar7 + -0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)((uVar9 | 0x18) + lVar4 * 8) = param_1[3];
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      memcpy(pvVar7,__src,0x1000); // [自动静态注释] 内存复制、清零或移动
      lVar4 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar9 + 0x98) = lVar4;
    } while (__src != pvVar8); // [自动静态注释] 循环/迭代
    __src = (void *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = (long)pvVar7;
  param_1[1] = (long)pvVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar2 + uVar5 * 0x1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__src == (void *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x002fd568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__src,lVar6 - (long)__src,0x1000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


