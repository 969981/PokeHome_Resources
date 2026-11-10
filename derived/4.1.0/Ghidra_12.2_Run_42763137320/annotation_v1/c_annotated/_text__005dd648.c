/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004DD648
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd648; name: FUN_.text__005dd648
 */


ulong FUN__text__005dd648(undefined4 *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  Uid *pUVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 2) != 0) && // [自动静态注释] 条件判断/分支
     (*(int *)(*(long *)(param_1 + 2) + (long)(int)param_1[4] * 4) == 3)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::account::GetLastOpenedUser((Uid *)&local_50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pUVar5 = (Uid *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((local_50 == *(long *)pUVar5) && // [自动静态注释] 条件判断/分支
       ((local_48 == *(long *)(param_1 + 0x12) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (iVar1 = nn::fs::EnsureSaveData(pUVar5), iVar1 != 0)))) goto LAB__text__005dd750; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = nn::fs::IsSaveDataExisting(param_2,pUVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
      uVar8 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(param_1 + 0xc) == 0) { // [自动静态注释] 条件判断/分支
        iVar1 = nn::fs::MountSaveData(uVar8,param_2,pUVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar1 != 0) goto LAB__text__005dd750; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        plVar7 = (long *)(*(long *)(param_1 + 0xc) + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*plVar7 + 0x10))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar1 = nn::fs::MountSaveData(uVar8,param_2,pUVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
LAB__text__005dd750: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          puVar4 = (uint *)nn::result::detail::OnUnhandledResult(iVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pcVar6 = *(char **)(puVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(puVar4 + 0xc) == 0) { // [自动静态注释] 条件判断/分支
            uVar3 = nn::fs::Commit(pcVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar4 = (uint)uVar3;
            return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          plVar7 = (long *)(*(long *)(puVar4 + 0xc) + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (**(code **)(*plVar7 + 0x10))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar2 = nn::fs::Commit(pcVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar4 = uVar2;
          (**(code **)(*plVar7 + 0x18))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return (ulong)uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(*plVar7 + 0x18))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(*(long *)(param_1 + 2) + (long)(int)param_1[4] * 4) = 2;
    } // [自动静态注释] 作用域/控制流边界
    *param_1 = 0;
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


