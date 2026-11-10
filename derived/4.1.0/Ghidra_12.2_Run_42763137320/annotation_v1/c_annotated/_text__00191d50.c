/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00091D50
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00191d50; name: FUN_.text__00191d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00191d50(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = _DAT_008a0598; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = lVar6 + 0x10;
  memset(param_1 + 2,0,0x3c0); // [自动静态注释] 内存复制、清零或移动
  lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = uVar8 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x3f0,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar8 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = param_2;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      FUN__text__001918f0(lVar3,param_2,CONCAT44(param_4,param_3),lVar6 << 0x20 | uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
      lVar5 = param_1[uVar7 * 0x14 + lVar6 * 4 + 2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[uVar7 * 0x14 + lVar6 * 4 + 2] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
        lVar3 = 0x3c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          lVar2 = lVar5 + lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar4 = *(long *)(lVar2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(lVar2 + 0x10) = 0;
          if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
            (**(code **)(**(long **)(lVar2 + 0x18) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (*(long **)(lVar2 + 0x18),lVar4,*(undefined8 *)(lVar2 + 0x20), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       *(undefined8 *)(lVar2 + 0x28));
          } // [自动静态注释] 作用域/控制流边界
          lVar3 = lVar3 + -0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar3 != 0); // [自动静态注释] 循环/迭代
        if (*(long *)(lVar5 + 0x20) != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(*(long *)(lVar5 + 0x20) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined8 *)(lVar5 + 0x20) = 0;
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(*(long *)param_1[uVar7 * 0x14 + lVar6 * 4 + 3] + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  ((long *)param_1[uVar7 * 0x14 + lVar6 * 4 + 3],lVar5, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   param_1[uVar7 * 0x14 + lVar6 * 4 + 4],param_1[uVar7 * 0x14 + lVar6 * 4 + 5]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar1 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[uVar7 * 0x14 + lVar6 * 4 + 3] = (long)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[uVar7 * 0x14 + lVar6 * 4 + 4] = 0x3f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[uVar7 * 0x14 + lVar6 * 4 + 5] = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar1 != 6); // [自动静态注释] 循环/迭代
    lVar6 = lVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar6 != 5); // [自动静态注释] 循环/迭代
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


