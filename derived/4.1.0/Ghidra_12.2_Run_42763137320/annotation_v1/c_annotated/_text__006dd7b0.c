/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005DD7B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006dd7b0; name: FUN_.text__006dd7b0
 */


uint FUN__text__006dd7b0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__006ece50(param_2,*(long *)(param_3 + 0x238) + 0x120); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ecef4(param_2,*(long *)(param_3 + 0x238) + 0x148); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ecd4c(param_2,*(long *)(param_3 + 0x238) + 0x164); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__006dd450(param_1,param_2,param_3,param_4,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006dd658(uVar4,param_2,param_3,param_4,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__006e2d48(*param_1,param_2,param_3,*(undefined4 *)(param_6 + 0x14),param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                              param_6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((uVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    lVar6 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = (long)*(int *)(param_3 + 0x28) << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = *(undefined8 *)(lVar6 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = (**(long **)(param_3 + 0xc0) - *(long *)(lVar6 + 0x170)) + *(long *)(lVar6 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ed12c(param_2,*(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3a4),&local_60,0x10, // [自动静态注释] 调用尚未恢复正式名称的函数
                        lVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = *(undefined8 *)(lVar6 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 8) - *(long *)(lVar6 + 0x170)) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               *(long *)(lVar6 + 0x1d8);
    FUN__text__006ed12c(param_2,*(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3a8),&local_60,0x10, // [自动静态注释] 调用尚未恢复正式名称的函数
                        lVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = *(long *)(param_3 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(lVar6 + 0x3ac) != -1) { // [自动静态注释] 条件判断/分支
      lVar7 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x10) - *(long *)(lVar7 + 0x170)) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 *(long *)(lVar7 + 0x1d8);
      FUN__text__006ed12c(param_2,*(int *)(lVar6 + 0x3ac),&local_60,0x10,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar6 = *(long *)(param_3 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar7 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = *(undefined8 *)(lVar7 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x20) - *(long *)(lVar7 + 0x170)) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               *(long *)(lVar7 + 0x1d8);
    FUN__text__006ed12c(param_2,*(undefined4 *)(lVar6 + 0x3b4),&local_60,0x10,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar6 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = *(undefined8 *)(lVar6 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x18) - *(long *)(lVar6 + 0x170)) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               *(long *)(lVar6 + 0x1d8);
    FUN__text__006ed12c(param_2,*(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3b0),&local_60,0x10, // [自动静态注释] 调用尚未恢复正式名称的函数
                        lVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = *(long *)(param_3 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(lVar6 + 0x3b8) != -1) { // [自动静态注释] 条件判断/分支
      lVar7 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x28) - *(long *)(lVar7 + 0x170)) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 *(long *)(lVar7 + 0x1d8);
      FUN__text__006ed12c(param_2,*(int *)(lVar6 + 0x3b8),&local_60,0x10,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar6 = *(long *)(param_3 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(int *)(lVar6 + 0x3bc) != -1) { // [自动静态注释] 条件判断/分支
      lVar7 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x30) - *(long *)(lVar7 + 0x170)) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 *(long *)(lVar7 + 0x1d8);
      FUN__text__006ed12c(param_2,*(int *)(lVar6 + 0x3bc),&local_60,0x10,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar6 = *(long *)(param_3 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(int *)(lVar6 + 0x3c0) != -1) { // [自动静态注释] 条件判断/分支
      lVar7 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x38) - *(long *)(lVar7 + 0x170)) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 *(long *)(lVar7 + 0x1d8);
      FUN__text__006ed12c(param_2,*(int *)(lVar6 + 0x3c0),&local_60,0x10,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar6 = *(long *)(param_3 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(int *)(lVar6 + 0x3c4) != -1) { // [自动静态注释] 条件判断/分支
      lVar7 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x40) - *(long *)(lVar7 + 0x170)) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 *(long *)(lVar7 + 0x1d8);
      FUN__text__006ed12c(param_2,*(int *)(lVar6 + 0x3c4),&local_60,0x10,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar6 = *(long *)(param_3 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(int *)(lVar6 + 0x3c8) != -1) { // [自动静态注释] 条件判断/分支
      lVar7 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x48) - *(long *)(lVar7 + 0x170)) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 *(long *)(lVar7 + 0x1d8);
      FUN__text__006ed12c(param_2,*(int *)(lVar6 + 0x3c8),&local_60,0x10,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar6 = *(long *)(param_3 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(int *)(lVar6 + 0x3cc) != -1) { // [自动静态注释] 条件判断/分支
      lVar7 = *(long *)(param_3 + 0x6f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x50) - *(long *)(lVar7 + 0x170)) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 *(long *)(lVar7 + 0x1d8);
      FUN__text__006ed12c(param_2,*(int *)(lVar6 + 0x3cc),&local_60,0x10,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar6 = *(long *)(param_3 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar9 = *(long **)(lVar6 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((plVar9 != (long *)0x0) && (iVar2 = (**(code **)(*plVar9 + 0x30))(plVar9), 0 < iVar2)) { // [自动静态注释] 条件判断/分支
      iVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_60,iVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,iVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = (**(code **)(*plVar9 + 0x18))(plVar9,iVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__006ed12c(param_2,iVar2,&local_60,uVar4,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
        iVar2 = iVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar3 = (**(code **)(*plVar9 + 0x30))(plVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (iVar2 < iVar3); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006ecfcc(param_2,*(long *)(param_3 + 0x238) + 0x370); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(char *)(*(long *)(param_3 + 0xa0) + 0x751) == '\0') { // [自动静态注释] 条件判断/分支
      if (plVar9 == (long *)0x0) { // [自动静态注释] 条件判断/分支
        FUN__text__006ec9c8(param_2,4,4,0,*(undefined4 *)(param_3 + 0x28),0); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*plVar9 + 0x58)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (plVar9,param_2,*(undefined4 *)(param_3 + 0x28),*(undefined1 *)(param_3 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__006ddc70(param_1,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar1 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


