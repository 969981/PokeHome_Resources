/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00285AE0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00385ae0; name: FUN_.text__00385ae0
 */


void FUN__text__00385ae0(long *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *pvVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pvVar6 = (void *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 <= (ulong)((param_1[2] - (long)pvVar6 >> 4) * 0x4cff9a64cff9a64d)) { // [自动静态注释] 条件判断/分支
    pvVar7 = pvVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 != 0) { // [自动静态注释] 条件判断/分支
      pvVar7 = (void *)((long)pvVar6 + param_2 * 0x2850); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = param_2 * 0x2850; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = *(long *)(uVar8 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (lVar2 == 0x10) goto LAB__text__00385d68; // [自动静态注释] 条件判断/分支
        *(long *)((uVar8 | 0x18) + lVar2 * 8) = param_1[3];
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
        memset(pvVar6,0,0x2850); // [自动静态注释] 内存复制、清零或移动
        pvVar6 = (void *)((long)pvVar6 + 0x2850); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar5 = lVar5 + -0x2850; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = *(long *)(uVar8 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(uVar8 + 0x98) = lVar2;
      } while (lVar5 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    param_1[1] = (long)pvVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = (long)pvVar6 - *param_1 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = lVar5 * 0x4cff9a64cff9a64d + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0x659b300659b30 < uVar8) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00385d74(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = param_1[2] - *param_1 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = lVar2 * -0x6600cb36600cb366; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 <= uVar8) { // [自动静态注释] 条件判断/分支
    uVar4 = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x32cd98032cd97 < (ulong)(lVar2 * 0x4cff9a64cff9a64d)) { // [自动静态注释] 条件判断/分支
    uVar4 = 0x659b300659b30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 * 0x2850,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) goto LAB__text__00385bc0; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00385bc0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __dest = (void *)(lVar2 + lVar5 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = param_2 * 0x2850; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(uVar8 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar6 = (void *)((long)__dest + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar7 = __dest; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (lVar3 == 0x10) goto LAB__text__00385d68; // [自动静态注释] 条件判断/分支
    *(long *)((uVar8 | 0x18) + lVar3 * 8) = param_1[3];
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    memset(pvVar7,0,0x2850); // [自动静态注释] 内存复制、清零或移动
    pvVar7 = (void *)((long)pvVar7 + 0x2850); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = lVar5 + -0x2850; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = *(long *)(uVar8 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar8 + 0x98) = lVar3;
  } while (lVar5 != 0); // [自动静态注释] 循环/迭代
  pvVar1 = (void *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar7 = (void *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pvVar7 != pvVar1) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (lVar3 == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__00385d68: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      pvVar7 = (void *)((long)pvVar7 + -0x2850); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __dest = (void *)((long)__dest + -0x2850); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)((uVar8 | 0x18) + lVar3 * 8) = param_1[3];
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      memcpy(__dest,pvVar7,0x2850); // [自动静态注释] 内存复制、清零或移动
      lVar3 = *(long *)(uVar8 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar8 + 0x98) = lVar3;
    } while (pvVar7 != pvVar1); // [自动静态注释] 循环/迭代
    pvVar7 = (void *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = (long)__dest;
  param_1[1] = (long)pvVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar2 + uVar4 * 0x2850; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pvVar7 == (void *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x00385cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pvVar7,lVar5 - (long)pvVar7,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


