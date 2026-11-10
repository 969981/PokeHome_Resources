/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000634A0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001634a0; name: FUN_.text__001634a0
 */


/* WARNING: Removing unreachable block (ram,0x001638e0) */
/* WARNING: Removing unreachable block (ram,0x001639ec) */

void FUN__text__001634a0(long param_1,uint param_2,uint param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(uint *)(param_1 + 0x1a0) = param_2;
  *(long **)(param_1 + 0x228) = param_4;
  local_44 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00163d7c(&local_68,param_4,&local_44); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x170) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x170) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x170) = local_68;
  FUN__text__00163d7c(&local_68,param_4,&local_44); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x178) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x178) = local_68;
  FUN__text__00163d7c(&local_68,param_4,&local_44); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x180) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x180) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x180) = local_68;
  FUN__text__00163d7c(&local_68,param_4,&local_44); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x188) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x188) = local_68;
  FUN__text__00163e98(&local_68,param_4,0x7252c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 400) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 400) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = *(uint *)(param_1 + 0x1a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 400) = local_68;
  sVar7 = (ulong)uVar2 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar3 = (void *)(**(code **)(*param_4 + 0x10))(param_4,sVar7,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = uVar10 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar10 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    lVar1 = uVar10 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(lVar1 + *(long *)(uVar10 + 0x98) * 8) = param_4;
    lVar6 = *(long *)(uVar10 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar10 + 0x98) = lVar6 + 1;
    if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
      memset(pvVar3,0,sVar7); // [自动静态注释] 内存复制、清零或移动
      lVar6 = *(long *)(uVar10 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(uVar10 + 0x98) = lVar6;
    plVar9 = *(long **)(param_1 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(void **)(param_1 + 0x1a8) = pvVar3;
    if (plVar9 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      uVar5 = *(ulong *)(param_1 + 0x1b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (0x17 < uVar5) { // [自动静态注释] 条件判断/分支
        uVar5 = uVar5 / 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar11 = plVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          if (*plVar11 != 0) { // [自动静态注释] 条件判断/分支
            (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *plVar11 = 0;
          } // [自动静态注释] 作用域/控制流边界
          uVar5 = uVar5 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar11 = plVar11 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (uVar5 != 0); // [自动静态注释] 循环/迭代
        uVar5 = *(ulong *)(param_1 + 0x1b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(**(long **)(param_1 + 0x1b0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x1b0),plVar9,uVar5,*(undefined8 *)(param_1 + 0x1c0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = local_44; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(param_1 + 0x1b0) = param_4;
    *(size_t *)(param_1 + 0x1b8) = sVar7;
    *(undefined8 *)(param_1 + 0x1c0) = 8;
    sVar7 = (ulong)local_44 << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pvVar3 = (void *)(**(code **)(*param_4 + 0x10))(param_4,sVar7,2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar10 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
      *(long **)(lVar1 + *(long *)(uVar10 + 0x98) * 8) = param_4;
      lVar6 = *(long *)(uVar10 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar10 + 0x98) = lVar6 + 1;
      if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
        memset(pvVar3,0,sVar7); // [自动静态注释] 内存复制、清零或移动
        lVar6 = *(long *)(uVar10 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(uVar10 + 0x98) = lVar6;
      lVar6 = *(long *)(param_1 + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(void **)(param_1 + 0x1e8) = pvVar3;
      if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(**(long **)(param_1 + 0x1f0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0x1f0),lVar6,*(undefined8 *)(param_1 + 0x1f8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 0x200));
      } // [自动静态注释] 作用域/控制流边界
      *(long **)(param_1 + 0x1f0) = param_4;
      *(size_t *)(param_1 + 0x1f8) = sVar7;
      *(undefined8 *)(param_1 + 0x200) = 2;
      if (*(long *)(uVar10 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
        *(long **)(lVar1 + *(long *)(uVar10 + 0x98) * 8) = param_4;
        *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
        lVar6 = (**(code **)(*param_4 + 0x10))(param_4,0x60,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar6 == 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*param_4 + 0xb8))(param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00156da0(lVar6,param_4,local_44); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(long **)(lVar6 + 8) = param_4;
        *(long *)(lVar6 + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x18) = 0x60;
        *(undefined8 *)(lVar6 + 0x20) = 8;
        *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*(long *)(param_1 + 0x198) != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(*(long *)(param_1 + 0x198) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *(long *)(param_1 + 0x198) = lVar6;
        sVar7 = (ulong)param_2 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pvVar3 = (void *)(**(code **)(*param_4 + 0x10))(param_4,sVar7,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)(uVar10 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
          *(long **)(lVar1 + *(long *)(uVar10 + 0x98) * 8) = param_4;
          lVar6 = *(long *)(uVar10 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long *)(uVar10 + 0x98) = lVar6 + 1;
          if (param_2 != 0) { // [自动静态注释] 条件判断/分支
            memset(pvVar3,0,sVar7); // [自动静态注释] 内存复制、清零或移动
            lVar6 = *(long *)(uVar10 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(long *)(uVar10 + 0x98) = lVar6;
          lVar6 = *(long *)(param_1 + 0x208); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(void **)(param_1 + 0x208) = pvVar3;
          if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
            (**(code **)(**(long **)(param_1 + 0x210) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (*(long **)(param_1 + 0x210),lVar6,*(undefined8 *)(param_1 + 0x218), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       *(undefined8 *)(param_1 + 0x220));
          } // [自动静态注释] 作用域/控制流边界
          lVar6 = *(long *)(param_1 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long **)(param_1 + 0x210) = param_4;
          *(size_t *)(param_1 + 0x218) = sVar7;
          *(undefined8 *)(param_1 + 0x220) = 4;
          if (lVar6 == 0) { // [自动静态注释] 条件判断/分支
            uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00163914: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *(int *)(param_1 + 0x1a0) = (int)uVar5;
          } // [自动静态注释] 作用域/控制流边界
          else if (*(int *)(param_1 + 0x1a0) != 0) { // [自动静态注释] 条件判断/分支
            lVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              *(ushort *)(lVar6 + lVar8 + 0x12) = *(ushort *)(lVar6 + lVar8 + 0x12) & 0xfffe;
              *(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar8 + 8) = 0;
              FUN__text__00163d7c(&local_68,param_4,&local_44); // [自动静态注释] 调用尚未恢复正式名称的函数
              lVar6 = *(long *)(param_1 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (*(long *)(lVar6 + lVar8) != 0) { // [自动静态注释] 条件判断/分支
                (**(code **)(*(long *)(*(long *)(lVar6 + lVar8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                *(undefined8 *)(lVar6 + lVar8) = 0;
              } // [自动静态注释] 作用域/控制流边界
              *(long *)(lVar6 + lVar8) = local_68;
              local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar6 = *(long *)(param_1 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (*(long *)(lVar6 + lVar8) == 0) goto LAB__text__00163914; // [自动静态注释] 条件判断/分支
              uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar8 = lVar8 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while (uVar5 < *(uint *)(param_1 + 0x1a0)); // [自动静态注释] 循环/迭代
          } // [自动静态注释] 作用域/控制流边界
          puVar4 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4,0x18,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(uVar10 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
            *(long **)(lVar1 + *(long *)(uVar10 + 0x98) * 8) = param_4;
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
            *puVar4 = 0;
            puVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
            plVar9 = *(long **)(param_1 + 0x1c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 **)(param_1 + 0x1c8) = puVar4;
            if (plVar9 != (long *)0x0) { // [自动静态注释] 条件判断/分支
              if (*plVar9 != 0) { // [自动静态注释] 条件判断/分支
                (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                *plVar9 = 0;
              } // [自动静态注释] 作用域/控制流边界
              (**(code **)(**(long **)(param_1 + 0x1d0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (*(long **)(param_1 + 0x1d0),plVar9,*(undefined8 *)(param_1 + 0x1d8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         *(undefined8 *)(param_1 + 0x1e0));
            } // [自动静态注释] 作用域/控制流边界
            *(long **)(param_1 + 0x1d0) = param_4;
            *(undefined8 *)(param_1 + 0x1d8) = 0x18;
            *(undefined8 *)(param_1 + 0x1e0) = 8;
            FUN__text__00163d7c(&local_68,param_4,&local_44); // [自动静态注释] 调用尚未恢复正式名称的函数
            plVar9 = *(long **)(param_1 + 0x1c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (*plVar9 != 0) { // [自动静态注释] 条件判断/分支
              (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *plVar9 = 0;
            } // [自动静态注释] 作用域/控制流边界
            *plVar9 = local_68;
            *(undefined4 *)(param_1 + 0x23c) = 0;
            *(undefined4 *)(param_1 + 0x244) = 0;
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


