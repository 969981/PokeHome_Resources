/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00304F90
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00404f90; name: FUN_.text__00404f90
 */


ulong FUN__text__00404f90(undefined8 param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar4 = (int)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00404130(param_1,param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = (long)iVar4 * 0x638; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = (&DAT_00ae8a40)[(long)iVar4 * 199]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = param_3 + 0x80U >> (*(ulong *)(&DAT_00ae8a30 + lVar1) & 0x3f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(long *)(&DAT_00ae8a28 + lVar1) - 1U & param_3 + 0x80U) != 0) { // [自动静态注释] 条件判断/分支
    uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = uVar6 * *(long *)(&DAT_00ae8a28 + lVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar10 <= uVar7) { // [自动静态注释] 条件判断/分支
    if (uVar10 <= *(ulong *)(&DAT_00ae8a38 + (long)iVar4 * 0x638)) { // [自动静态注释] 条件判断/分支
      uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar8 = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = uVar8 + uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar7 = DAT_00ae89d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = DAT_00ae89d0 + lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (DAT_00ae89c8 != 0 && DAT_00ae89c8 < uVar10) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    while (DAT_00ae89d0 == uVar7) { // [自动静态注释] 循环/迭代
      cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar3 = (bool)ExclusiveMonitorPass(0xae89d0,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar3) { // [自动静态注释] 条件判断/分支
        cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        DAT_00ae89d0 = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (cVar2 == '\0') { // [自动静态注释] 条件判断/分支
        uVar10 = (**(code **)(&DAT_00ae89e0 + (long)iVar4 * 0x638))(lVar1,&local_28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((uVar8 != 0) && (uVar10 != 0)) { // [自动静态注释] 条件判断/分支
          uVar8 = uVar8 - (uVar10 & (*(ulong *)(&DAT_00ae8a50 + (long)iVar4 * 0x638) ^ // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                    0xffffffffffffffff)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar10 = uVar10 + uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = (undefined4)(uVar8 >> 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (uVar10 != 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(uVar10 + 0x3c) = uVar5;
          *(undefined4 *)(uVar10 + 0xc) = 0xffffffff;
          *(int *)(uVar10 + 0x2c) = (int)uVar6;
          *(long *)(uVar10 + 0x40) = param_2;
          *(undefined8 *)(uVar10 + 0x58) = local_28;
          uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(param_2 + 0x3110) != 0) { // [自动静态注释] 条件判断/分支
            *(ulong *)(*(long *)(param_2 + 0x3110) + 0x50) = uVar10;
            uVar9 = *(undefined8 *)(param_2 + 0x3110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(undefined8 *)(uVar10 + 0x48) = uVar9;
          *(ulong *)(param_2 + 0x3110) = uVar10;
          uVar10 = uVar10 + 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long *)(param_2 + 0xce8) = *(long *)(param_2 + 0xce8) + 1;
        } // [自动静态注释] 作用域/控制流边界
        return uVar10; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


